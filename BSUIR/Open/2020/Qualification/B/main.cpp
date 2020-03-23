#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(), cntZ = 0;
    vector<int> dig;
    for (auto i : s) {
        dig.push_back(i - '0');
        cntZ += (i == '0');
    }
    sort(begin(dig), end(dig));
    int notZ = 0;
    for (int i = 0; i < n; ++i) {
        if (dig[i] != 0) {
            notZ = i;
            break;
        }
    }

    auto gg = [&](string &s) {
        if (s.size() == 0) {
            return false;
        }
        return (s[0] != '0' || (s[0] == '0' && s.size() == 1));
    };
    auto check = [&](string &s) {
        if (s.size() == 0) {
            return false;
        }
        return (gg(s) && stoull(s) <= (unsigned long long)1e18);
    };
    auto sort_dig = [&](string &s) {
        multiset<char> d;
        for (auto i : s) {
            if (i == '0') continue;
            d.insert(i);
        }
        for (auto &i : s) {
            if (i == '0') continue;
            i = *d.begin();
            d.erase(d.begin());
        }
        return s;
    };
    auto try_to_normalize = [&](string a, string b) {
        if (a.size() < 20 && b.size() < 20 && check(a) && check(b)) {
            a = sort_dig(a), b = sort_dig(b);
            return make_pair(a, b);
        }
        for (int i = 0; i < b.size(); ++i) {
            if ((b[i] - '0') > ((i == 0) ? 1 : 0)) {
                for (int j = a.size() - 1; j >= 0; --j) {
                    if (a[j] - '0' <= ((i == 0) ? 1 : 0)) {
                        swap(b[i], a[j]);
                        if (a.size() < 20 && b.size() < 20 && check(a) &&
                            check(b)) {
                            a = sort_dig(a), b = sort_dig(b);
                            return make_pair(a, b);
                        }
                    }
                }
            }
        }
        a = sort_dig(a), b = sort_dig(b);
        return make_pair(a, b);
    };

    for (int len = 1; len <= min(n - 1, 19); ++len) {
        for (int z = 0; z < dig.size(); ++z) {
            int cnt = cntZ, fir_dig = dig[z];
            if (fir_dig == 0 && len != 1) {
                continue;
            }
            string fir_ans = "";
            fir_ans += char(fir_dig + '0');
            cnt -= (fir_dig == 0);
            while (cnt && fir_ans.size() < len) {
                fir_ans += "0";
                --cnt;
            }
            int pos = notZ;
            vector<bool> used(n);
            used[z] = 1;
            while (fir_ans.size() < len && pos < dig.size()) {
                if (used[pos]) {
                    ++pos;
                    continue;
                }
                fir_ans += char(dig[pos] + '0');
                used[pos] = 1, ++pos;
            }
            string sec_ans = "";
            while (used[pos]) ++pos;
            sec_ans += char(dig[pos] + '0');
            ++pos;
            while (sec_ans.size() < n - len && cnt) {
                sec_ans += "0";
                --cnt;
            }
            while (sec_ans.size() < n - len & pos < dig.size()) {
                if (used[pos]) {
                    ++pos;
                    continue;
                }
                sec_ans += char(dig[pos] + '0');
                used[pos] = 1, ++pos;
            }
            pair<string, string> it = try_to_normalize(fir_ans, sec_ans);
            fir_ans = it.first, sec_ans = it.second;
            if (fir_ans.size() < 20 && sec_ans.size() < 20 && check(fir_ans) &&
                check(sec_ans)) {
                cout << fir_ans << " " << sec_ans;
                return 0;
            }
        }
    }
    cout << "-1 -1";
    return 0;
}
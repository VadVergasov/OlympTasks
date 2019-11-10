#include <bits/stdc++.h>

#define ll long long

using namespace std;

int bin_pow(int a, int n) {
    int res = 1;
    while (n) {
        if (n & 1) res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}

int bin_to_dec(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
        int cur = s[i] - '0';
        res += cur * bin_pow(2, s.size() - i - 1);
    }
    return res;
}

string hex_to_bin(string s) {
    string res = "";
    int ten = 0;
    for (int i = 0; i < s.size(); ++i) {
        int cur;
        if (isdigit(s[i])) {
            cur = (s[i] - '0') * bin_pow(16, s.size() - i - 1);

        } else {
            cur = (s[i] - 'A' + 10) * bin_pow(16, s.size() - i - 1);
        }
        ten += cur;
    }
    while (ten) {
        res += (ten % 2 + '0');
        ten >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int main() {
    int n;
    vector<string> vs;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        vs.push_back(tmp);
    }
    string res = "";
    for (int i = 0; i < n; i += 3) {
        if (i + 2 >= n) break;
        string s1 = hex_to_bin(vs[i]);
        string s2 = hex_to_bin(vs[i + 1]);
        string s3 = hex_to_bin(vs[i + 2]);
        while (s1.size() < 8) s1 = "0" + s1;
        while (s2.size() < 8) s2 = "0" + s2;
        while (s3.size() < 8) s3 = "0" + s3;
        string buf = "";
        s1 += s2 + s3;

        int cnt = 0;
        for (int j = 0; j < (int)s1.size(); ++j) {
            buf += s1[j];

            ++cnt;
            if (cnt == 6) {
                res += str[bin_to_dec(buf)];
                buf = "";
                cnt = 0;
            }
        }
    }
    if (n % 3 == 1) {
        string s1 = hex_to_bin(vs[n - 1]);
        while (s1.size() < 8) s1 = "0" + s1;
        while (s1.size() < 12) s1 += "0";
        string buf = "";
        int cnt = 0;
        for (int j = 0; j < (int)s1.size(); ++j) {
            buf += s1[j];
            ++cnt;
            if (cnt == 6) {
                res += str[bin_to_dec(buf)];
                buf = "";
                cnt = 0;
            }
        }
        res += "==";
    }
    if (n % 3 == 2) {
        string s1 = hex_to_bin(vs[n - 2]);
        string s2 = hex_to_bin(vs[n - 1]);
        while (s1.size() < 8) s1 = "0" + s1;
        while (s2.size() < 8) s2 = "0" + s2;
        while (s2.size() < 10) s2 += "0";
        string buf = "";
        s1 += s2;
        int cnt = 0;
        for (int j = 0; j < (int)s1.size(); ++j) {
            buf += s1[j];

            ++cnt;
            if (cnt == 6) {
                res += str[bin_to_dec(buf)];
                buf = "";
                cnt = 0;
            }
        }
        res += "=";
    }
    cout << res << '\n';
    return 0;
}
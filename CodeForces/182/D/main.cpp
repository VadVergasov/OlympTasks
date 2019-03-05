#include <bits/stdc++.h>

using namespace std;

const int p = 31;
vector<unsigned long long> pows(100000);

int main() {
    pows[0] = 1;
    string s1, s2;
    cin >> s1 >> s2;
    vector<unsigned long long> hash1, hash2;
    for (int i = 1; i < max(s1.size(), s2.size()); i++) {
        pows[i] *= pows[i - 1] * p;
    }

    for (int i = 0; i < s1.size(); i++) {
        hash1[i] = (s1[i] - 'a' + 1) * pows[i];
        if (i) {
            hash1[i] += hash1[i - 1];
        }
    }
    for (int i = 0; i < s2.size(); i++) {
        hash2[i] = (s2[i] - 'a' + 1) * pows[i];
        if (i) {
            hash2[i] += hash2[i - 1];
        }
    }
    return 0;
}
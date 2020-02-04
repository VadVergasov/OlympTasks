#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, n1;
        cin >> n;
        n1 = n;
        set<int> uniq;
        multiset<int> all;
        while (n1 % 2 == 0) {
            n1 /= 2;
            uniq.insert(2);
            all.insert(2);
        }
        for (int i = 3; i * i <= n; i += 2) {
            while (n1 % i == 0) {
                n1 /= i;
                uniq.insert(i);
                all.insert(i);
            }
        }
        if (n1 != 1) {
            uniq.insert(n1);
            all.insert(n1);
        }
        if (uniq.size() > 2) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*++uniq.begin()) << " "
                 << n / ((*++uniq.begin()) * (*uniq.begin())) << "\n";
        } else if (uniq.size() == 2 && all.size() > 3) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*++uniq.begin()) << " "
                 << n / ((*uniq.begin()) * (*++uniq.begin())) << "\n";
        } else if (uniq.size() == 1 && all.size() > 5) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*uniq.begin()) * (*uniq.begin())
                 << " "
                 << n / ((*uniq.begin()) * (*uniq.begin()) * (*uniq.begin()))
                 << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
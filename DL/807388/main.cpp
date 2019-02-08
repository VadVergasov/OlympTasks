#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    double k;
    in >> k;
    int n = ceil(k / 2);
    vector<int> a;
    vector<char> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j = i * i; j <= n; j += i) prime[j] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            a.push_back(i);
            cout << i << " ";
        }
    }
    /*long long r=0;
    do{
        r++;
    }while(next_permutation(pr.begin(), pr.end()));
    cout<<r;*/
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, a, k, i;
    cin>>n>>m>>a;
    i=ceil((double)n/a);
    k=ceil((double)m/a);
    cout<<i*k;
    return 0;
}

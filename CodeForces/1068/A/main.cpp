#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, k, l;
    cin>>n>>m>>k>>l;
    if(l+k>n||((k+l-1)/m+1)*m>n){
        cout<<-1;
        return 0;
    }
    cout<<(k+l-1)/m+1;
    return 0;
}

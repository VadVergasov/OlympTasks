#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

int main(){
    ios_base::sync_with_stdio(false);
    int n, m, tmp, tmp1, tmp2;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>tmp>>tmp1>>tmp2;
        if(tmp==1){
            long long res=0;
            for(int j=tmp1-1;j<tmp2;j++){
                res+=a[j];
            }
            cout<<res<<"\n";
        }else{
            int x;
            cin>>x;
            for(int j=tmp1-1;j<tmp2;j++){
                a[j]^=x;
            }
        }
    }
    return 0;
}

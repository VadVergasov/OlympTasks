#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, x, res=0;
    cin>>n>>x;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0&&x/i<=n&&i<=n){
            if(i==x/i){
                res++;
                continue;
            }
            res+=2;
        }
    }
    cout<<res;
    return 0;
}

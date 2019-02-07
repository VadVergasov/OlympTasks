#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, res=0;
    cin>>n;
    while(n){
        if(n%2==1){
            res++;
        }
        n/=2;
    }
    cout<<res;
    return 0;
}

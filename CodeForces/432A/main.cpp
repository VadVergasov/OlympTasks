#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, tmp, res=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(5-tmp>=k){
            res++;
        }
    }
    cout<<res/3;
    return 0;
}

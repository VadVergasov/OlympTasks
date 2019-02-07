#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, res=0, pol=0, tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp==-1){
            if(pol==0){
                res++;
            }else{
                pol--;
            }
        }else{
            pol+=tmp;
        }
    }
    cout<<res;
    return 0;
}

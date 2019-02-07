#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int res=0;
    while(n){
        res++;
        if(res%m==0){
            n+=1;
        }
        n--;
    }
    cout<<res;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, s=0, res=0;
    cin>>n>>m;
    if(n<m){
        cout<<-1;
        return 0;
    }
    while(s<n){
        res++;
        s+=2*m;
    }
    while(s>n){
        s--;
    }
    cout<<res;
    return 0;
}

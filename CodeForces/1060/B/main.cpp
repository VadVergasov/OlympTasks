#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, n1;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    n1=n;
    int ln=0;
    while(n){
        ln++;
        n/=10;
    }
    int res=(ln-1)*9;
    long long sec, fir=0;
    for(int i=0;i<ln-1;i++){
        fir*=10;
        fir+=9;
    }
    sec=n1-fir;
    int s=0;
    while(sec){
        s+=sec%10;
        sec/=10;
    }
    res+=s;
    cout<<res;
    return 0;
}
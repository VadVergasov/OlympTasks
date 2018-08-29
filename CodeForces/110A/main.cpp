#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    int i=0;
    while(n){
        if(n%10==4||n%10==7){
            i++;
        }
        n/=10;
    }
    if(i==4||i==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

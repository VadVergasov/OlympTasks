#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%3==0&&n%9!=0){
        cout<<n/3<<" "<<n/3<<" "<<n/3;
        return 0;
    }else if(n%3==0&&n%9==0){
        cout<<n/3-1<<" "<<n/3-1<<" "<<n/3+2;
        return 0;
    }else if(n%3==2){
        cout<<n/3-1<<" "<<n/3-1<<" "<<n/3+2;
    }
    return 0;
}

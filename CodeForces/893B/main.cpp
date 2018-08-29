#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(short int i=9;i>=0;i--){
        if(n%(int)((pow(2, i)-1)*pow(2, i-1))==0){
            cout<<(pow(2, i)-1)*pow(2, i-1);
            break;
        }
    }
    return 0;
}

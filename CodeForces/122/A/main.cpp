#include <bits/stdc++.h>

using namespace std;

short int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main(){
    short int n;
    bool b=false;
    cin>>n;
    for(short int i=0;i<14;i++){
        if(n%lucky[i]==0){
            b=true;
            break;
        }
    }
    if(b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

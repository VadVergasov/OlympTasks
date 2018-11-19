#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m=0, k=0, tmp1, tmp2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp1>>tmp2;
        if(tmp1>tmp2){
            m++;
        }else if(tmp1<tmp2){
            k++;
        }
    }
    if(m==k){
        cout<<"Friendship is magic!^^";
    }else if(m<k){
        cout<<"Chris";
    }else{
        cout<<"Mishka";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        int j=3;
        while(180*(j-2)/j<a){
            j++;
        }
        if((double)(180*(j-2))/(double)j==a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

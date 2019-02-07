#include <bits/stdc++.h>

using namespace std;

int main(){
    short int n, h, res=0, tmp;
    cin>>n>>h;
    vector<short int> a;
    for(short int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(short int i=0;i<n;i++){
        if(a[i]>h){
            res+=2;
        }else{
            res++;
        }
    }
    cout<<res;
    return 0;
}

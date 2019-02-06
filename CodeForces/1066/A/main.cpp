#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int L, v, l, r, res=0, mx;
        cin>>L>>v>>l>>r;
        mx=L/v;
        res=mx-(r/v-l/v);
        if(l%v==0){
            res--;
        }
        cout<<res<<"\n";
    }
    return 0;
}

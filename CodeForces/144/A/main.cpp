#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, mn=100, mx=0, mnpos, mxpos;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        mn=min(mn, tmp);
        mx=max(mx, tmp);
        a.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        if(a[i]==mn){
            mnpos=i+1;
        }
        if(a[i]==mx){
            mxpos=i+1;
        }
    }
    cout<<abs(mxpos+1-n)+mnpos-2;
    return 0;
}

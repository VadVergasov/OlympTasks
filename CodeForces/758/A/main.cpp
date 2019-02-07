#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, mx=0, res=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        mx=max(mx, tmp);
        a.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        res+=mx-a[i];
    }
    cout<<res;
    return 0;
}

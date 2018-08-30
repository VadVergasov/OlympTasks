#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, tmp;
    cin>>n>>m;
    vector<int> a, b;
    for(int i=0;i<m;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for(int i=0;i<m-n;i++){
        int mn=1000;
        for(int j=n;j>0;j++){
            mn=min(mn, a[i+j]-a[i+j-1]);
        }
        b.push_back(mn);
    }
    sort(b.begin(), b.end());
    cout<<b[0];
    return 0;
}

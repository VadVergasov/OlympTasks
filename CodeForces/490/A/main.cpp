#include <bits/stdc++.h>

using namespace std;

int a[3];

int main(){
    int n, tmp, res;
    cin>>n;
    vector<vector<int> > b(3);
    for(int i=0;i<n;i++){
        cin>>tmp;
        b[tmp-1].push_back(i+1);
        a[tmp-1]++;
    }
    res=min(a[0], min(a[1], a[2]));
    cout<<res<<"\n";
    for(int i=0;i<res;i++){
        cout<<b[0][i]<<" "<<b[1][i]<<" "<<b[2][i]<<"\n";
    }
    return 0;
}

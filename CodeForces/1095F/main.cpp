#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<pair<int, int>, int> > c;
    for(int i=0;i<m;i++){
        int t1, t2, t3;
        cin>>t1>>t2>>t3;
        c.push_back(make_pair(make_pair(t1, t2), t3));
    }
    return 0;
}

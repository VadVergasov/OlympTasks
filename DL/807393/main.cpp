#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k, tmp1, tmp2;
    cin>>n>>m>>k;
    vector<vector<int> > a(m, vector<int>(m));
    vector<pair<int, int> > coords;
    for(int i=0;i<n;i++){
        cin>>tmp1>>tmp2;
        coords.push_back(make_pair(tmp1, tmp2));
    }
    return 0;
}

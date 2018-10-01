#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k, tmp1, tmp2;
    cin>>n>>m>>k;
    vector<pair<int, int> > a;
    for(int i=0;i<n;i++){
        cin>>tmp1>>tmp2;
        a.push_back(make_pair(tmp1, tmp2));
    }
    return 0;
}

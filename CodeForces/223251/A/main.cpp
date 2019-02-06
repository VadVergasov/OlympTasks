#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, tmp;
    cin>>n;
    vector<int> cost, res;
    for(int i=0;i<n;i++){
        cin>>tmp;
        cost.push_back(tmp);
    }
    sort(cost.begin(), cost.end());
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tmp;
        res.push_back(upper_bound(cost.begin(), cost.end(), tmp)-cost.begin());
    }
    for(int i=0;i<q;i++){
        cout<<res[i]<<"\n";
    }
    return 0;
}

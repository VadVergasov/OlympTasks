#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, vector<int> > a, pair<int, vector<int> > b){
    return a.first<b.first;
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<pair<int, vector<int> > > a;
    if(k==0){
        cout<<n<<"\n";
        for(int i=0;i<n;i++){
            cout<<i+1<<" ";
        }
        return 0;
    }
    if(1+2*k>=n){
        cout<<1<<"\n";
        cout<<ceil((double)n/2.0);
        return 0;
    }
    for(int i=0;i<k+1;i++){
        int counter=0;
        vector<int> pos;
        for(int j=i;j<=n;j+=(1+2*k)){
            counter++;
            pos.push_back(j+1);
        }
        a.push_back(make_pair(counter, pos));
    }
    sort(a.begin(), a.end(), cmp);
    for(int i=0;i<a.size();i++){
        cout<<a[i].first<<"\n";
        for(int j=0;j<a[i].second.size();j++){
            cout<<a[i].second[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
    return a.first>b.first;
}

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a(n);
    vector<pair<int, pair<int, int> > > b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        b.push_back(make_pair(a[i+1]-a[i]+1, make_pair(i, i+1)));
    }
    sort(b.begin(), b.end(), cmp);
    int i=1, res=a.back()-a.front()+1;
    while(i<k){
        res-=b[i-1].first;
        res+=2;
        i++;
    }
    cout<<res;
    return 0;
}
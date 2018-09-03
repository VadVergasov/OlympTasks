#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, long long> a, pair<string, long long> b){
    return a.second<b.second;
}

int main(){
    long long n, tmp;
    string s;
    cin>>n;
    vector<pair<string, long long> > a, k;
    map<string, long long> sum, it;
    for(long long i=0;i<n;i++){
        cin>>s;
        cin>>tmp;
        a.push_back(make_pair(s, tmp));
        sum[s]+=tmp;
    }
    vector<string> mx;
    long long m=-10e9;
    for(map<string, long long>::iterator i=sum.begin();i!=sum.end();i++){
        m=max(m, i->second);
    }
    for(map<string, long long>::iterator i=sum.begin();i!=sum.end();i++){
        if(i->second==m){
            mx.push_back(i->first);
        }
    }
    if(mx.size()==1){
        cout<<mx[0];
        return 0;
    }
    for(long long i=0;i<n;i++){
        for(long long j=0;j<mx.size();j++){
            if(a[i].first==mx[j]){
                it[mx[j]]+=a[i].second;
            }
            if(it[mx[j]]==m){
                k.push_back(make_pair(mx[j], i));
            }
        }
    }
    sort(k.begin(), k.end(), cmp);
    cout<<k[0].first;
    return 0;
}

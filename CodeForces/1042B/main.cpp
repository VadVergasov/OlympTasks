#include <bits/stdc++.h>

using namespace std;

int v[3];

bool cmp(pair<int, string> a, pair<int, string> b){
    return (a.second<   b.second)&&(a.second.size()>b.second.size());
}

int main(){
    int n, tmp;
    cin>>n;
    vector<pair<int, string> > a;
    string s;
    for(int i=0;i<n;i++){
        cin>>tmp;
        cin>>s;
        sort(s.begin(), s.end());
        a.push_back(make_pair(tmp, s));
        for(int j=0;j<s.size();j++){
            v[s[j]-'A']++;
        }
    }
    for(int i=0;i<3;i++){
        if(v[i]==0){
            cout<<-1;
            return 0;
        }
    }
    sort(a.begin(), a.end(), cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }
    return 0;
}

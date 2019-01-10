#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, tmp;
    string t;
    in>>n>>m>>k;
    vector<string> r;
    vector<pair<int, string> > a;
    for(int i=0;i<n;i++){
        in>>tmp>>t;
        a.push_back(make_pair(tmp, t));
    }
    for(int i=0;i<n;i++){
        string s="";
        int cur=a[i].first-1;
        for(int j=0;j<m;j++){
            s+=a[cur].second;
            cur=a[cur].first-1;
        }
        r.push_back(s);
    }
    sort(r.begin(), r.end());
    for(int i=0;i<r.size();i++){
        out<<r[i]<<endl;
    }
    return 0;
}

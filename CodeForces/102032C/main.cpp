#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, res=0;
    cin>>n>>m;
    vector<pair<char, pair<int, int> > > r;
    vector<vector<int> > a(n, vector<int>(m)), b(n, vector<int>(m)), c(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=b[i][j]-a[i][j];
            if(c[i][j]<0){
                cout<<-1;
                return 0;
            }
        }
    }
    set<int> q, w;
    for(int i=0;i<n;i++){
        if(c[i][0]==1){
            r.push_back(make_pair('R', make_pair(i+1, 1)));
            for(int j=0;j<m;j++){
                c[i][j]--;
            }
            res++;
        }else if(c[i][0]>1){
            q.insert(i);
            res++;
        }
    }
    for(int i=0;i<m;i++){
        if(c[0][i]==1){
            r.push_back(make_pair('C', make_pair(i+1, 1)));
            for(int j=0;j<n;j++){
                c[j][i]--;
            }
            res++;
        }else if(c[0][i]>1){
            w.insert(i);
            res++;
        }
    }
    cout<<res<<"\n";
    for(auto i:q){
        int mn=0;
        for(int j=0;j<m;j++){
            if(w.find(j)!=w.end()){

            }
        }
    }
    for(int i=0;i<r.size();i++){
        cout<<r[i].first<<" "<<r[i].second.first<<" "<<r[i].second.second<<"\n";
    }
    return 0;
}
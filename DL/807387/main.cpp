#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a;
vector<bool> used;

void dfs(int v, int from){
    used[v]=true;
    for(int i=0;i<a[v].size();i++){
        if(!used[i]&&a[v][i]!=0){
            a[from][i]=max(a[from][v]+a[v][i], a[from][i]);
            dfs(i, v);
        }
    }
}

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, tmp3;
    in>>n;
    a.resize(n, {});
    used.resize(n, false);
    for(int i=0;i<n;i++){
        a[i].resize(n, 0);
    }
    for(int i=0;i<n;i++){
        in>>tmp1>>tmp2>>tmp3;
        a[tmp1-1][tmp2-1]=tmp3;
        a[tmp2-1][tmp1-1]=tmp3;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout.width(2);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    dfs(0, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout.width(2);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int mx=0, start;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(mx, a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==mx){
                start=j;
                break;
            }
        }
    }
    for(int i=0;i<used.size();i++){
        used[i]=0;
    }
    dfs(start, start);
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout.width(2);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(mx, a[i][j]);
        }
    }
    cout<<mx;
    return 0;
}

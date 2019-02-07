#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char> > a(n);
    char tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }
    int x, y, w=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='B'){
                x=i;
                y=j;
                for(int k=i;k<n;k++){
                    if(a[k][j]=='B'){
                        w++;
                    }
                }
                goto RES;
            }
        }
    }
    RES:cout<<x+w/2+1<<" "<<y+w/2+1;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    char tmp;
    int n, k;
    cin>>n>>k;
    vector<vector<int> > c;
    vector<int> t1;
    t1.resize(n, 0);
    c.resize(n, t1);
    vector<vector<char> > a;
    vector<char> t;
    t.resize(n, '1');
    a.resize(n, t);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            a[i][j]=tmp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='.'){
                bool r=false, d=false;
                if(j+k<=n){
                    r=true;
                    for(int l=0;l<k;l++){
                        if(a[i][j+l]!='.'){
                            r=false;
                            break;
                        }
                    }
                    if(r){
                        for(int l=0;l<k;l++){
                            c[i][j+l]++;
                        }
                    }
                }
                if(i+k<=n){
                    d=true;
                    for(int l=0;l<k;l++){
                        if(a[i+l][j]!='.'){
                            d=false;
                            break;
                        }
                    }
                    if(d){
                        for(int l=0;l<k;l++){
                            c[i+l][j]++;
                        }
                    }
                }
            }
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx=max(mx, c[i][j]);
        }
    }
    int r1=-1, r2=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]==mx){
               r1=i+1;
               r2=j+1;
               break;
            }
        }
        if(r1!=-1){
            break;
        }
    }
    cout<<r1<<" "<<r2;
    return 0;
}

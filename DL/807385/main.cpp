#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m, s;
    in>>n>>m>>s;
    vector<vector<char> > a(n+3);
    char tmp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            in>>tmp;
            a[i].push_back(tmp);
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                if(i+s<=n){
                    bool r=true;
                    for(int k=0;k<s;k++){
                        if(a[i+k][j]=='#'){
                            r=false;
                            break;
                        }
                    }
                    if(r){
                        res++;
                    }
                }
                if(j+s<=m){
                    bool r=true;
                    for(int k=0;k<s;k++){
                        if(a[i][j+k]=='#'){
                            r=false;
                            break;
                        }
                    }
                    if(r){
                        res++;
                    }
                }
            }
        }
    }
    out<<res;
    return 0;
}

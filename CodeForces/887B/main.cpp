#include <bits/stdc++.h>

using namespace std;

int main(){
    short int n, tmp, res=0, o=1;
    vector<long long> all;
    all.resize(1000, -1);
    vector<vector<short int> > a;
    cin>>n;
    a.resize(n);
    for(short int i=0;i<n;i++){
        for(short int j=0;j<6;j++){
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }
    for(short int i=0;i<n;i++){
        for(short int j=0;j<6;j++){
            all[a[i][j]]++;
        }
    }
    if(n>1){
        for(short int i=0;i<n-1;i++){
            for(short int j=i+1;j<n;j++){
                for(short int i1=0;i1<6;i1++){
                    for(short int j1=0;j1<6;j1++){
                        all[a[i][i1]*10+a[j][j1]]++;
                        all[a[j][j1]*10+a[i][i1]]++;
                    }
                }
            }
        }
    }
    if(n>2){
        for(short int i=0;i<6;i++){
            for(short int j=0;j<6;j++){
                for(short int k=0;k<6;k++){
                    all[a[0][i]*100+a[1][j]*10+a[2][k]]++;
                    all[a[0][i]*100+a[2][k]*10+a[1][j]]++;
                    all[a[1][j]*100+a[0][i]*10+a[2][k]]++;
                    all[a[1][j]*100+a[2][k]*10+a[0][i]]++;
                    all[a[2][k]*100+a[1][j]*10+a[0][i]]++;
                    all[a[2][k]*100+a[0][i]*10+a[1][j]]++;
                }
            }
        }
    }
    while(all[o]!=-1){
        res++;
        o++;
    }
    cout<<res;
    return 0;
}

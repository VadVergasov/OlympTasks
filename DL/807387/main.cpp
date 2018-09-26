#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a;
vector<bool> v;

void Go(int i, int j, int n){
    for(i;i<n;i++){
        for(j;j<n;j++){
            if(a[i][j]!=0&&v[j]==false){
                for(int k=0;k<n;k++){
                    if(a[j][k]!=0){
                        a[i][k]=a[i][j]+a[j][k];
                    }
                }
                v[j]=true;
            }
        }
    }
}

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, tmp3;
    in>>n;
    v.resize(n, false);
    a.resize(n, {});
    for(int i=0;i<n;i++){
        a[i].resize(n, 0);
    }
    for(int i=0;i<n;i++){
        in>>tmp1>>tmp2>>tmp3;
        a[tmp1-1][tmp2-1]=tmp3;
        a[tmp2-1][tmp1-1]=tmp3;
    }
    for(int i=0;i<n;i++){
        Go(i, 0, n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

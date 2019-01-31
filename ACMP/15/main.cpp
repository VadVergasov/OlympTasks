#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<vector<int> > a(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            in>>a[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(a[i][j]==1){
                res++;
            }
        }
    }
    out<<res;
    return 0;
}

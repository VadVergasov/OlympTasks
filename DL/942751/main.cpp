#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, s;
    in>>n>>m>>k>>s;
    vector<vector<int> > a(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    return 0;
}

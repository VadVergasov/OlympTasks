#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in>>n>>m;
    vector<vector<int> > a(n, vector<int>(0));
    for(int i=0;i<m;i++){
        int t1, t2;
        in>>t1>>t2;
        a[t1-1].push_back(t2-1);
        a[t2-1].push_back(t1-1);
    }
    for(int i=0;i<n;i++){
        out<<a[i].size()<<" ";
    }
    return 0;
}

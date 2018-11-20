#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, cur=0, dir=1;
    in>>n;
    in.ignore();
    string s;
    getline(in, s);
    vector<vector<char> > a(n, vector<char>(s.size(), 30));
    for(int i=0;i<s.size();i++){
        a[cur][i]=s[i];
        cur+=dir;
        if(cur==n-1||cur==0){
            dir*=-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<s.size();j++){
            if(a[i][j]!=30){
                out<<a[i][j];
            }
        }
    }
    return 0;
}

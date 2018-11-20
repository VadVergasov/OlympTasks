#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int k=0;
    in>>k;
    in.ignore();
    string s;
    getline(in, s);
    vector<string> a(ceil((double)s.size()/(double)k), "");
    for(int i=0;i<a.size();i++){
        for(int j=i*k;j<min(k*(i+1), (int)(k*i+s.size()-k*i));j++){
            a[i]+=s[j];
        }
    }
    for(int i=0;i<a.size();i++){
        reverse(a[i].begin(), a[i].end());
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            out<<a[i][j];
        }
    }
    return 0;
}

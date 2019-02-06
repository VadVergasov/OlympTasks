#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<int> a;
    int t;
    in>>t;
    while(t!=0){
        a.push_back(t);
        in>>t;
    }
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            for(int k=j+1;k<a.size();k++){
                if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i]){
                    out<<"YES\n"<<a[i]<<" "<<a[j]<<" "<<a[k];
                    return 0;
                }
            }
        }
    }
    out<<"NO";
    return 0;
}
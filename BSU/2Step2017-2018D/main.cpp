#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<vector<int> > a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }

    return 0;
}

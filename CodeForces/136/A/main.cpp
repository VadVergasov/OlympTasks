#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> a;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>tmp;
        a[tmp-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

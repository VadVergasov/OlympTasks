#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

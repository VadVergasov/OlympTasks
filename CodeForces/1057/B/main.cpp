#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, res=0;
    cin>>n;
    vector<int> a;
    cin>>tmp;
    a.push_back(tmp);
    for(int i=1;i<n;i++){
        cin>>tmp;
        a.push_back(a[i-1]+tmp);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

        }
    }
    cout<<res;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<long long> a;
    cin>>tmp;
    a.push_back(tmp);
    for(int i=1;i<n;i++){
        cin>>tmp;
        a.push_back(a[i-1]+tmp);
    }
    for(int i=0;i<n;i++){
        if(a[i]>=ceil((double)a[a.size()-1]/2)){
            cout<<i+1;
            break;
        }
    }
    return 0;
}

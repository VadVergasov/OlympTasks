#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, res=0, num=0;
    cin>>n;
    vector<int> a(1, -1);
    map<int, int> m;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    a.push_back(-1);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j-1]!=a[j]){
                m[a[i]]
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int n, a, m[4001];

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        m[i]=-10000;
    }
    for(int i=0;i<3;i++){
        cin>>a;
        for(int j=a;j<=n;j++){
            m[j]=max(m[j], m[j-a]+1);
        }
    }
    cout<<m[n];
    return 0;
}

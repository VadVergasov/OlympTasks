#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    cout<<min(a[n-2]-a.front(), a.back()-a[1]);
    return 0;
}

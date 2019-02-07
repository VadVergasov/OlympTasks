#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string tmp;
    vector<string> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    int res=1;
    for(int i=0;i<n-1;i++){
        if(a[i][1]==a[i+1][0]){
            res++;
        }
    }
    cout<<res;
    return 0;
}

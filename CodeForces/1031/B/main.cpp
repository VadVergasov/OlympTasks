#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool res=true;
    cin>>n;
    vector<int> a, b, t;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>b[i];
        if(b[i]>a[i]){
            res=false;
            break;
        }
    }
    if(!res){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    for(int i=0;i<n-1;i++){

    }
    return 0;
}

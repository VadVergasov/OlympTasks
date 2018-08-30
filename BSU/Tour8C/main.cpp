#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, sum=0;
    cin>>n;
    vector<int> a, b;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
        sum+=tmp;
    }
    if(sum%3!=0){
        cout<<0;
        return 0;
    }
    b.resize(sum, -1);
    for(int i=0;i<n;i++){
        b[a[i]]=i;
    }
    while(b[sum/3]==-1){

    }
    return 0;
}

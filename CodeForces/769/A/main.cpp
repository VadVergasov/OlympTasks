#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> igor;
    for(int i=0;i<n;i++){
        cin>>tmp;
        igor.push_back(tmp);
    }
    if(n==1){
        cout<<igor[0];
    }else{
        sort(igor.begin(), igor.end());
        cout<<igor[ceil(igor.size()/2)];
    }
    return 0;
}

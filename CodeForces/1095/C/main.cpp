#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, o=0;
    cin>>n>>k;
    vector<int> b;
    multiset<int> ans;
    if(n<k){
        cout<<"NO";
        return 0;
    }
    while(n){
        b.push_back(n%2);
        if(b.back()==1){
            o++;
        }
        n/=2;
    }
    if(o>k){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<b.size();i++){
        if(b[i]==1){
            ans.insert(pow(2, i));
        }
    }
    while(ans.size()<k){
        int t=*ans.rbegin();
        ans.erase(ans.find(t));
        ans.insert(t/2);
        ans.insert(t/2);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}

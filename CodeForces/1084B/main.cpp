#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, mn=10e9;
    long long s, sum=0;
    cin>>n>>s;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
        mn=min(mn, tmp);
        sum+=tmp;
    }
    if(sum<s){
        cout<<-1;
        return 0;
    }
    long long cur=0;
    for(int i=0;i<n;i++){
        cur+=a[i]-mn;
    }
    if(cur>=s){
        cout<<mn;
        return 0;
    }
    while(cur<s){
        cur+=n;
        mn--;
    }
    cout<<mn;
    return 0;
}

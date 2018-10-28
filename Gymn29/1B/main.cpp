#include <bits/stdc++.h>

using namespace std;

long long combo_vombo(int n, int k){
    if(n==k){
        return 1;
    }
    if(k==1){
        return n;
    }
    return combo_vombo(n-1, k-1)+combo_vombo(n-1, k);
}

int main(){
    string s;
    cin>>s;
    vector<int> a;
    for(int i=s.size();i>=0;i--){
        if(s[i]=='8'){
            a.push_back(0);
        }
        if(s[i]=='2'){
            for(int j=0;j<a.size();j++){
                a[j]++;
            }
        }
    }
    /*for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }*/
    long long res=0;
    for(int i=0;i<a.size();i++){
        res+=combo_vombo(a[i], 2);
    }
    cout<<res;
    return 0;
}

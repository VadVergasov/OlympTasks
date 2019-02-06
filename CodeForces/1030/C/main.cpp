#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    string s;
    cin>>s;
    bool res=false;
    for(int i=2;i<=n;i++){
        vector<int> sum;
        for(int j=i;j<n;j+=i){
            int sm=0;
            for(int k=0;k<j;k++){
                sm+=s[i+k]-'0';
            }
            sum.push_back(sm);
        }
        for(int j=0;j<sum.size()-1;j++){
            if(sum[j]!=sum[i]){
                break;
            }else{
                res=true;
            }
        }
    }
    if(res){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

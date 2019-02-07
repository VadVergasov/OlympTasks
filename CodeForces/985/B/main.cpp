#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    string tmp;
    cin>>n>>m;
    vector<string> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    vector<int> sum;
    sum.resize(m, 0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[j]+=a[i][j]-'0';
        }
    }
    if(n==1){
        cout<<"NO";
        return 0;
    }
    string mask;
    bool res=true;
    for(int i=0;i<m;i++){
        if(sum[i]==0){
            res=false;
            break;
        }
        if(sum[i]==1){
            mask+='0';
        }else{
            mask+='1';
        }
    }
    if(!res){
        cout<<"NO";
        return 0;
    }
    res=false;
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==mask[j]||mask[j]=='1'&&a[i][j]=='0'){
                t++;
            }
        }
        if(t==m){
            res=true;
            break;
        }
    }
    if(res){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

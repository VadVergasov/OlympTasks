#include <bits/stdc++.h>

using namespace std;

int main(){
    bool res=true;
    short int n, tmp, w=3;
    cin>>n;
    pair<short int, short int> now;
    now.first=1;
    now.second=2;
    vector<short int> a;
    for(short int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(short int i=0;i<n;i++){
        if(a[i]!=now.first&&a[i]!=now.second){
                res=false;
                break;
        }else{
            if(a[i]==now.first){
                tmp=now.second;
                now.second=w;
                w=tmp;
            }else{
                tmp=now.first;
                now.first=w;
                w=tmp;
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

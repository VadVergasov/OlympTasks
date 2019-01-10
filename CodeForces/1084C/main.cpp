#include <bits/stdc++.h>

using namespace std;

int main(){
    long long res=0;
    bool f=false;
    string s;
    cin>>s;
    vector<long long> a;
    a.push_back(0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            res++;
            if(f){
                res+=a[a.size()-2];
            }
            a.back()++;
        }else if(s[i]=='b'){
            a.push_back(a.back());
            f=true;
        }else{
            if(a.size()>1){
                long long t=a[0];
                for(int j=1;j<a.size();j++){
                    t*=a[j];
                }
                res+=t;
            }
            f=false;
            a.resize(1, 0);
        }
        res%=(long long)(10e9)+7;
    }
    cout<<res;
    return 0;
}

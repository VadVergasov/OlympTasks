#include <bits/stdc++.h>

using namespace std;

int main(){
    short int one=0, zero=0;
    long long test;
    string s;
    cin>>s;
    if(s.size()<8){
        if(s!="1000000"){
            cout<<"no";
        }else{
            cout<<"yes";
        }
    }else{
        for(short int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
            if(one>0&&s[i]=='0'){
                zero++;
            }
        }
        if(one>0&&zero>5){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
    return 0;
}

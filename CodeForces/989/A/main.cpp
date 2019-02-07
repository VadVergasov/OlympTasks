#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.find("ABC")!=-1||s.find("ACB")!=-1||s.find("BAC")!=-1||s.find("BCA")!=-1||s.find("CAB")!=-1||s.find("CBA")!=-1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

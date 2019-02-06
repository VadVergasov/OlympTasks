#include <bits/stdc++.h>

using namespace std;

int main(){
    int res=0, us=0;
    string in;
    while(getline(cin, in)){
        if(in[0]=='+'){
            us++;
        }
        if(in[0]=='-'){
            us--;
        }
        if(in.find(":")!=-1){
            res+=us*(in.size()-1-in.find(":"));
        }
    }
    cout<<res;
    return 0;
}

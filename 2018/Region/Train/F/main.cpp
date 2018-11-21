#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int q;
    in>>q;
    string s;
    for(int i=0;i<q;i++){
        in>>s;
        int a=0;
        if(s.size()-4<0){
            a+=abs((int)s.size()-4);
        }
        for(int j=0;j<s.size();j++){
            if(s[j]=='0'||s[j]=='4'||s[j]=='8'){
                a++;
            }
        }
        cout<<a<<" ";
        if(a%2==0){
            cout<<"N";
        }else{
            cout<<"Y";
        }
    }
    return 0;
}

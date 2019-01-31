#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in>>s;
    if(s.size()!=5||!isalpha(s[0])||!isdigit(s[1])||s[2]!='-'||!isalpha(s[3])||!isdigit(s[4])){
        out<<"ERROR";
        return 0;
    }
    int x=abs(s[0]-s[3]), y=abs(s[1]-s[4]);
    if(x==2&&y==1||x==1&&y==2){
        out<<"YES";
    }else{
        out<<"NO";
    }
    return 0;
}

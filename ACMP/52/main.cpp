#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in>>s;
    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
        out<<"YES";
    }else{
        out<<"NO";
    }
    return 0;
}

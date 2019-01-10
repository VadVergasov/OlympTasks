#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, res=0;
    in>>n;
    in.ignore();
    string s;
    for(int i=0;i<n;i++){
        getline(in, s);
        if(s.size()!=8){
            res++;
            continue;
        }
        for(int j=0;j<s.size();j++){
            if(!(s[j]>='a'&&s[j]<='z'||s[j]>='A'&&s[j]<='Z'||s[j]>='0'&&s[j]<='9')){
                res++;
                break;
            }
            if((s[j]=='O'||s[j]=='0'||s[j]=='I'||s[j]=='l'||s[j]=='1')){
                res++;
                break;
            }
        }
    }
    out<<n-res<<" "<<res;
    return 0;
}

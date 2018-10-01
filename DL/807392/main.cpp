#include <bits/stdc++.h>

using namespace std;

string add(string a){
    int p=0;
    if(a[a.size()-1]=='9'){
        if(a.size()==1){
            a[0]='0';
            a.insert(a.begin(), '1');
            return a;
        }else{
            a[a.size()-1]='0';
            p=1;
        }
    }else{
        a[a.size()-1]++;
        p=0;
    }
    for(int i=a.size()-2;i>=0;i--){
        if(p==1){
            if(a[i]=='9'&&i==0){
                a[i]='0';
                a.insert(a.begin(), '1');
                break;
            }
            if(a[i]=='9'){
                a[i]='0';
                p=1;
            }else{
                a[i]++;
                p=0;
            }
        }
    }
    return a;
}

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    string all="0258", s, res;
    in>>s;
    s=add(s);
    bool ready=false;
    while(!ready){
        bool r=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='6'&&s[s.size()-1-i]=='9'||s[i]=='9'&&s[s.size()-1-i]=='6'){
                continue;
            }
            bool in=false;
            for(int j=0;j<4;j++){
                if(s[i]==all[j]&&s[i]==s[s.size()-1-i]){
                    in=true;
                }
            }
            if(in){
                continue;
            }
            s=add(s);
            r=false;
        }
        ready=r;
    }
    out<<s;
    return 0;
}

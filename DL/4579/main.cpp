#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in>>s;
    stack<char> a;
    bool res=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            a.push(s[i]);
        }else{
            if(a.empty()){
                out<<char(132)<<char(160);
                return 0;
            }else{
                if(a.top()=='('){
                    if(s[i]==')'){
                        a.pop();
                        continue;
                    }else{
                        out<<char(141)<<char(165)<<char(226);
                        return 0;
                    }
                }else if(a.top()=='['){
                    if(s[i]==']'){
                        a.pop();
                        continue;
                    }else{
                        out<<char(141)<<char(165)<<char(226);
                        return 0;
                    }
                }else if(a.top()=='{'){
                    if(s[i]=='}'){
                        a.pop();
                        continue;
                    }else{
                        out<<char(141)<<char(165)<<char(226);
                        return 0;
                    }
                }
            }
        }
    }
    out<<char(132)<<char(160);
    return 0;
}

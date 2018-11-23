#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> c={".,1", "abc2", "def3", "ghi4", "jkl5", "mno6", "pqrs7", "tuv8", "wxyz9", "+0", " "};
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, pre=-1;
    long long res=0;
    in>>n;
    string s;
    in.ignore();
    getline(in, s);
    res+=s.size()*3;
    for(int i=0;i<s.size();i++){
        int num;
        for(int j=0;j<c.size();j++){
            if(c[j].find(tolower(s[i]))!=-1){
                num=j;
                break;
            }
        }
        if(i==pre&&pre!=-1){
            if(n==1&&s[i]>='a'&&s[i]&&'z'<=s[i]||n==2&&s[i]>='A'&&s[i]&&'Z'<=s[i]){
                res+=num+1;
            }else{
                if(n==1){
                    n=2;
                }else{
                    n=1;
                }
                res+=num+4;
            }
            pre==i;
        }else{
            if(n==1&&s[i]>='a'&&s[i]&&'z'<=s[i]||n==2&&s[i]>='A'&&s[i]&&'Z'<=s[i]){
                res+=num+2;
            }else{
                if(n==1){
                    n=2;
                }else{
                    n=1;
                }
                res+=num+5;
            }
            pre==i;
        }
    }
    cout<<res;
    return 0;
}

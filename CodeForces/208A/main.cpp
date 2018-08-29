#include <bits/stdc++.h>

using namespace std;

int main(){
    int tmp;
    string s;
    cin>>s;
    tmp = s.find("WUB");
    while(tmp!=-1){
        s.replace(tmp, 3, " ");
        tmp=s.find("WUB");
    }
    cout<<s;
    return 0;
}

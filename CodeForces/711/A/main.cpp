#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string tmp;
    vector<string> s;
    for(int i=0;i<n;i++){
        cin>>tmp;
        s.push_back(tmp);
    }
    bool res=false;
    for(int i=0;i<n;i++){
        if(s[i][0]=='O'&&s[i][1]=='O'){
            s[i][0]='+';
            s[i][1]='+';
            res=true;
            break;
        }else if(s[i][3]=='O'&&s[i][4]=='O'){
            res=true;
            s[i][3]='+';
            s[i][4]='+';
            break;
        }
    }
    if(!res){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<<s[i]<<"\n";
    }
    return 0;
}

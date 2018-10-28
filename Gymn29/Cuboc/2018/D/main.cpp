#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<string> all;
    getline(cin, s);
    istringstream iss(s);
    do{
        string t;
        iss>>t;
        all.push_back(t);
    }while(iss);
    for(int i=0;i<all.size()-1;i++){
        string tmp="";
        if(all[i].size()==1){
            continue;
        }
        for(int j=1;j<all[i].size()-1;j++){
            tmp+=all[i][j];
        }
        sort(tmp.begin(), tmp.end());
        all[i].erase(all[i].begin()+1, all[i].end()-1);
        all[i].insert(1, tmp);
    }
    for(int i=0;i<all.size();i++){
        cout<<all[i]<<" ";
    }
    return 0;
}

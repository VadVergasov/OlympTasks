#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int k, num=0, res=0;
    in>>k;
    string s;
    getline(in, s);
    getline(in, s);
    vector<int> a;
    for(int i=0;i<s.size();i++){
        if(s[i]==','){
            a.push_back(num);
            num=0;
        }else{
            num++;
        }
    }
    if(s.back()!=','){
        a.push_back(num);
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==k){
            res++;
        }
    }
    out<<res;
    return 0;
}

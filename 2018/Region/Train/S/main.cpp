#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b, n, k;
    string cur;
    in>>a>>b>>n>>k;
    for(int i=0;i<n;i++){
        cur=to_string(a+b*i);
        if((k-(int)cur.size())>0){
            k-=cur.size();
        }else{
            out<<cur[k-1];
            return 0;
        }
        if(k==0){
            out<<cur.back();
            return 0;
        }
    }
    if(k>0){
        out<<-1;
    }
    return 0;
}

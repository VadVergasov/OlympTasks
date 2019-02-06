#include <bits/stdc++.h>

using namespace std;

string fib(int n){
    if(n==1){
        return "b";
    }
    if(n==2){
        return "a";
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    int n, res=0;
    in>>s>>n;
    string f=fib(n);
    int pos=0, i=0;
    while(pos!=-1){
        pos=f.find(s, i);
        i=pos+1;
        if(pos==-1){
            break;
        }
        res++;
    }
    out<<res;
    return 0;
}
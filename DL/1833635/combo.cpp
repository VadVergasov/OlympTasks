#include "grader.h"
#include <bits/stdc++.h>

using namespace std;

string guess_sequence (int N) {
    vector<string> a={"ABX", "ABY", "AXB", "AXY", "AYB", "AYX", "BAX", "BAY", "BXA", "BXY", "BYA", "BYX", "XAB", "XAY", "XBA", "XBY", "XYA", "XYB", "YAB", "YAX", "YBA", "YBX", "YXA", "YXB"};
    string p = "";
    vector<char> sym={'A', 'B', 'X', 'Y'};
    for(int i=0;i<4;i++){
        string t="";
        t.push_back(sym[i]);
        if(press(t)==1){
            p=sym[i];
            sym.erase(sym.begin()+i, sym.begin()+i+1);
            break;
        }
    }
    char cur=sym[0];
    int n=1;
    while(press(p+cur)!=N){
        if(n<press(p+cur)){
            p+=cur;
            cur=sym[0];
            n++;
        }else{
            if(cur==sym[0]){
                cur=sym[1];
            }else{
                cur=sym[2];
            }
        }
    }
    p+=cur;
    return p;
}

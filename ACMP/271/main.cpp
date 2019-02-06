#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<long long> fib = {0, 1};
    while(fib.back()<n){
        fib.push_back(fib.back()+fib[fib.size()-2]);
    }
    if(fib.back()==n){
        out<<1<<"\n"<<fib.size()-1;
    }else{
        out<<0;
    }
    return 0;
}

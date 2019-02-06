#include <bits/stdc++.h>

using namespace std;

long long fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in>>n;
    out<<fib(n);
    return 0;
}

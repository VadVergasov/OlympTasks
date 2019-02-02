#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, m, f=0, s=0;
    in>>n>>m;
    for(long long i=2;i<=sqrt(n);i++){
        while(n%i==0){
            f++;
            n/=i;
        }
    }
    if(n>1){
        f++;
    }
    for(long long i=2;i<=sqrt(m);i++){
        while(m%i==0){
            s++;
            m/=i;
        }
    }
    if(m>1){
        s++;
    }
    out<<abs(f-s);
    return 0;
}

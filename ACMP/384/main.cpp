#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b;
    in>>a>>b;
    int gc = __gcd(a, b), fir=0, sec=1;
    for(int i=0;i<gc;i++){
        fir+=sec;
        swap(fir, sec);
    }
    out<<fir;
    return 0;
}

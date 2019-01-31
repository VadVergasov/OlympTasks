#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in>>n>>m;
    out<<n/__gcd(n, m);
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b, c;
    in>>a>>b>>c;
    out<<max(a, max(b, c))-min(a, min(b, c));
    return 0;
}

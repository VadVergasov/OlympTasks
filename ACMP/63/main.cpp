#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x, y;
    in>>x>>y;
    int f=1, s=x-1;
    while(f*s!=y){
        f++;
        s--;
    }
    out<<f<<" "<<s;
    return 0;
}

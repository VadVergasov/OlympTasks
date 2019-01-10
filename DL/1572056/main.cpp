#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, tmp;
    map<int, int> a;
    in>>n>>m>>k;
    for(int i=0;i<n;i++){
        in>>tmp;
        map[tmp]++;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    reverse(a.begin(), a.end());
    for(int i=0;i<n;i++){
        out<<a[i]<<" ";
    }
    return 0;
}

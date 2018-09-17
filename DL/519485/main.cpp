#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp;
    in>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        in>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    out<<a[a.size()-1]-a[0];
    return 0;
}

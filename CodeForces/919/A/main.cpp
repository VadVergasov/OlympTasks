#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned short int n, m;
    double a, b;
    cin>>n>>m;
    vector<double> d;
    for(unsigned short int i=0;i<n;i++){
        cin>>a>>b;
        d.push_back(a/b);
    }
    sort(d.begin(), d.end());
    cout<<fixed<<setprecision(8)<<(double)(d[0]*m);
    return 0;
}

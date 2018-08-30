#include <bits/stdc++.h>

using namespace std;

ofstream out("b.out");
ifstream in("b.in");

int main(){
    int n, tmp;
    in>>n;
    vector<vector<int> > a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            in>>tmp;
            a[i].push_back(tmp);
        }
    }
    b[0]=a[0][0];
    if(n>1){
        b[1]=min(a[0][1], b[0]+a[1][0]);
        for(int i=3;i<n;i++){
            b[i]=min(b[i-2]+b[i-1]+a[i][0], min(b[i-3]+a[i-2][2], b[i-2]+a[i-1][1]));
        }
    }
    out<<b[n-1];
    return 0;
}

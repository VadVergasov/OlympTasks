#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    scanf("%d", &n);
    vector<vector<int> > a(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &tmp);
            a[i].push_back(tmp);
        }
    }
    return 0;
}

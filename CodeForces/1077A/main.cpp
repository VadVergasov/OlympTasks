#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, tmp1, tmp2, tmp3;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp1>>tmp2>>tmp3;
        long long cur=ceil(tmp3/2.0)*tmp1-(tmp3/2)*tmp2;
        cout<<cur<<"\n";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z, t1, t2, t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    if(abs(x-y)*t1>=(abs(x-y)+abs(x-z))*t2+t3*3){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

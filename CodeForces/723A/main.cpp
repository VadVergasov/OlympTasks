#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d=1000;
    cin>>a>>b>>c;
    for(int i=1;i<=100;i++){
        d=min(d, abs(a-i)+abs(b-i)+abs(c-i));
    }
    cout<<d;
    return 0;
}

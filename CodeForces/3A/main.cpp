#include <bits/stdc++.h>

using namespace std;

int main(){
    char s, t;
    int x1, y1, x2, y2, x, y, d, o, n;
    cin>>s>>y1>>t>>y2;
    x1=s-'a';
    x2=t-'a';
    x=abs(x2-x1);
    y=abs(y2-y1);
    d=min(x, y);
    o=max(x, y)-d;
    n=d+o;
    cout<<n<<"\n";
    for(int i=0;i<d;i++){
        if(x2>x1){
            cout<<"R";
        }else{
            cout<<"L";
        }
        if(y2>y1){
            cout<<"U\n";
        }else{
            cout<<"D\n";
        }
    }
    x-=d;
    y-=d;
    for(int i=0;i<x;i++){
        if(x2>x1){
            cout<<"R\n";
        }else{
            cout<<"L\n";
        }
    }
    for(int i=0;i<y;i++){
        if(y2>y1){
            cout<<"U\n";
        }else{
            cout<<"D\n";
        }
    }
    return 0;
}
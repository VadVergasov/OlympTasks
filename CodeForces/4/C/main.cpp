#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string tmp;
    map<string, int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(a[tmp]==0){
            cout<<"OK\n";
        }else{
            cout<<tmp<<to_string(a[tmp])<<"\n";
        }
        a[tmp]++;
    }
    return 0;
}

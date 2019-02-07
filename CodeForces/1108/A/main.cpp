#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    int t1, t2, t3, t4;
    for(int i=0;i<q;i++){
        cin>>t1>>t2>>t3>>t4;
        if(t1<=t3){
            if(t1==t3){
                cout<<t1<<" "<<t3+1<<"\n";
            }else{
                cout<<t1<<" "<<t3<<"\n";
            }
        }else{
            cout<<t1<<" "<<t3<<"\n";
        }
    }
    return 0;
}

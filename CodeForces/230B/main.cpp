#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

int main(){
    int n;
    cin>>n;
    for(int i=2;i<1000;i++){
        if(!prime[i]){
            for(int j=i*i;j<1000001;j+=i){
                prime[j]=true;
            }
        }
    }
    long long tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        long long t=sqrt(tmp);
        if(t*t==tmp&&!prime[t]&&t!=1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

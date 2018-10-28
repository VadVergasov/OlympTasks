#include <bits/stdc++.h>

using namespace std;

int main(){
    //Ia xz kak eto reshat( Vrode norm no net, poetomu moi ishodniki - bezishodniki...
    long long const MOD=100000000000000007;
    int n, tmp;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        sum+=tmp%MOD;
        sum%=MOD;
    }
    cout<<sum;
    return 0;
}

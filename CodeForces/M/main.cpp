#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, s, tmp;
    cin>>n>>k>>s;
    vector<int> a, mn(n+s+1, 200000), mx(n+s+1, 0);
    for(int i=0;i<k;i++){
        cin>>tmp;
        mn[s+tmp]=200001;
    }
    if(k==0){
        cout<<ceil(n/(double)s)<<" "<<n;
        return 0;
    }else{
        for(int i=s;i<n+s+1;i++){
            if(mn[i]==200001){
                continue;
            }
            for(int j=1;j<=s;j++){
                mn[i]=min(mn[i], mn[i-j]+1);
                mx[i]=max(mx[i], mx[i-j]+1);
            }
        }
    }
    cout<<mn[n+s]<<" "<<mx[n+s];
    return 0;
}

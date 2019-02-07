#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, res=360;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    int i=0, j=0, sum=0;
    while(i<n){
        sum+=a[i];
        while(sum>=180){
            res=min(res, 2*abs(180-sum));
            sum-=a[j];
            j++;
        }
        res=min(res, 2*abs(180-sum));
        i++;
    }
    cout<<res;
    return 0;
}

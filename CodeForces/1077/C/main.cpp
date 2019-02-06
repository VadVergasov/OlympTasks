#include <bits/stdc++.h>

using namespace std;

int a[10000000];

int main(){
    long long sum=0;
    long long n, tmp, res=0;
    cin>>n;
    vector<long long> b, r;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a[tmp]++;
        sum+=tmp;
        b.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        a[b[i]]--;
        if((sum-b[i])/2>10e6+2){
            continue;
        }
        if((sum-b[i])%2==0&&a[(sum-b[i])/2]>0){
            res++;
            r.push_back(i+1);
        }
        a[b[i]]++;
    }
    cout<<res<<"\n";
    for(int i=0;i<res;i++){
        cout<<r[i]<<" ";
    }
    return 0;
}

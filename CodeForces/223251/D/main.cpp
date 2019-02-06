#include <bits/stdc++.h>

using namespace std;

vector<int> a, b;
int n, s, tmp, res;

void dix(int l, int r){
    if(l==r){
        res=l;
        return;
    }else{
        for(int i=0;i<n;i++){
            b[i]=a[i]+i*((r-l)/2);
        }
        int sum=0, i=0;
        while(sum+a[i]<s){
            sum+=a[i];
            i++;
        }
        if(i==n){
            res=l;
            return;
        }else if(i>n){
            dix((r-l)/2, r);
        }else{
            dix(l, (r-l)/2);
        }
    }
}

int main(){
    cin>>n>>s;
    b.resize(n);
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    dix(0, n);
    cout<<res;
    return 0;
}

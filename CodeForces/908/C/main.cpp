#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<double> res;
    short int n, r, tmp;
    cin>>n>>r;
    vector<short int> c;
    for(short int i=0;i<n;i++){
        cin>>tmp;
        c.push_back(tmp);
    }
    res.push_back(r);
    for(short int i=1;i<n;i++){
        res.push_back(r);
        for(short int j=i-1;j>=0;j--){
            if(abs(c[i]-c[j])<=r*2){
                    res[res.size()-1]=max(res[res.size()-1], sqrt(((r+r)*(r+r))-((c[i]-c[j])*(c[i]-c[j])))+res[j]);
            }
        }
    }
    for(short int i=0;i<n;i++){
        cout<<fixed<<setprecision(10)<<res[i]<<" ";
    }
    return 0;
}

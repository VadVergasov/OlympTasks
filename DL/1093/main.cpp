#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> a(n+1);
    string tmp;
    for(int i=0;i<n+1;i++){
        getline(cin, tmp);
        a[i]=tmp;
    }
    vector<int> sum(n*(n+1)/2);
    sum[0]=a[1][0];
    for(int i=1;i<n+1;i++){
        for(int j=0;j<a[i].size();j+=2){
            if(j==0){
                sum[i*(i+1)/2]=sum[i*(i-1)/2];
                continue;
            }
            if(j==a[i].size()-1){
                sum[i*(i+1)/2+a[i].size()/2]=sum[i*(i-1)/2=a[i-1].size()/2];
                continue;
            }
            sum[i*(i+1)/2+j/2]=max();
        }
    }
    return 0;
}

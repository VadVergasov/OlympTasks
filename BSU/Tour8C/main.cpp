#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, sum=0;
    scanf("%d", &n);
    vector<int> a, b;
    for(int i=0;i<n;i++){
        scanf("%d", &tmp);
        a.push_back(tmp);
        sum+=tmp;
    }
    if(sum%3!=0){
        cout<<0;
        return 0;
    }
    b.resize(sum, -1);
    while(b[sum/3]==-1){
        for(int i=sum-1;i>=0;i--){

        }
    }
    return 0;
}

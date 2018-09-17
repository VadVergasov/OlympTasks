#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, tmp;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    int res1, res2=a[a.size()-1]+m, pos=0;
    while(m>0){
        if(a[pos]>a[pos+1]){
            pos++;
            if(pos==n){
                pos=0;
            }
            a[pos]++;
        }else{
            a[pos]++;
        }
        m--;
        sort(a.begin(), a.end());
    }
    sort(a.begin(), a.end());
    res1=a[a.size()-1];
    cout<<res1<<" "<<res2;
    return 0;
}

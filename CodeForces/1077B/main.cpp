#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, res=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    a.push_back(-1);
    for(int i=1;i<n-1;i++){
        if(a[i]==0){
            if(a[i-1]==1&&a[i+1]==1){
                if(a[i+2]==0){
                    res++;
                    i=i+2;
                }else{
                    res++;
                }
            }
        }
    }
    cout<<res;
    return 0;
}

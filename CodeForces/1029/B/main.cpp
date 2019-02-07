#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> a, b;
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    int num=1;
    for(int i=0;i<n-1;i++){
        if(2*a[i]>=a[i+1]){
            num++;
        }else{
            b.push_back(num);
            num=1;
        }
    }
    b.push_back(num);
    sort(b.begin(), b.end());
    cout<<b[b.size()-1];
    return 0;
}

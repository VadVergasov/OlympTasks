#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, p, q;
    cin>>n;
    vector<int> a;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if(a.size()==0||a[0]!=1){
        cout<<"Oh, my keyboard!";
        return 0;
    }
    int t=a[0];
    for(int i=1;i<a.size();i++){
        t=a[i];
        if(!(a[i-1]+1>=a[i])){
            break;
        }
    }
    if(t!=n){
        cout<<"Oh, my keyboard!";
    }else{
        cout<<"I become the guy.";
    }
    return 0;
}

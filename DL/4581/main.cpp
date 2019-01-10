#include <bits/stdc++.h>

using namespace std;

long long get(int s, string u, const int &m, const vector<int> &a){
    int sum=0;
    if(s==m){
        sum++;
    }
    int sz=a.size();
    for(int i=0;i<sz;i++){
        if(u[i]!='1'){
            u[i]='1';
            sum+=get(s+a[i], u, m, a);
        }
    }
    return sum;
}

int main(){
    int m, n, tmp;
    cin>>m>>n;
    vector<int> a;
    string use="";
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
        use+='0';
    }
    cout<<get(0, use, m, a);
    return 0;
}

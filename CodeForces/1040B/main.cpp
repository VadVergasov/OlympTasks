#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, vector<int> > a, pair<int, vector<int> > b){
    return a.first<b.first;
}

int main(){
    int n, k;
    cin>>n>>k;
    int it=n/(2*k+1);
    if(n%(2*k+1)){
        it++;
    }
    cout<<it<<"\n";
    int step=k+1;
    if(it*(2*k+1)-k>n){
        step-=it*(2*k+1)-k-n;
    }
    for(int i=0;i<it;i++, step+=(2*k+1)){
        cout<<step<<" ";
    }
    return 0;
}

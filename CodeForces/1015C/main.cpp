#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
    return a>b;
}

int main(){
    unsigned long long full=0, ziped=0;
    int n, m, tmp1, tmp2, res=0;
    cin>>n>>m;
    vector<int> all, zip, dif;
    for(int i=0;i<n;i++){
        cin>>tmp1>>tmp2;
        all.push_back(tmp1);
        zip.push_back(tmp2);
        dif.push_back(tmp1-tmp2);
        full+=tmp1;
        ziped+=tmp2;
    }
    if(ziped>m){
        cout<<-1;
        return 0;
    }
    if(full<=m){
        cout<<0;
        return 0;
    }
    sort(dif.begin(), dif.end(), comp);
    while(full>m){
        full-=dif[res];
        res++;
    }
    cout<<res;
    return 0;
}

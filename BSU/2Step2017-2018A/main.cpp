#include <bits/stdc++.h>

using namespace std;

ofstream out("output.txt");
ifstream in("input.txt");

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first>b.first;
}

int main(){
    string x;
    in>>x;
    if(x.find("000")!=-1){
        out<<0<<" "<<x[0]<<x[1]<<x[2];
        return 0;
    }
    int zero=0, num=0, a[4];
    for(int i=0;i<x.size();i++){
        if(x[i]=='0'){
            zero++;
        }
    }
    if(zero==2){
        for(int i=0;i<x.size();i++){
            if(x[i]!='0'){
                a[num]=x[i]-'0', num++;
            }
        }
        sort(a, a+2);
        out<<a[0]<<0<<" "<<a[1]<<0;
        return 0;
    }
    for(int i=0;i<x.size();i++){
        a[num]=x[i]-'0', num++;
    }
    int mx=0;
    vector<pair<int, int> > m;
    do{
        mx=max(mx, (a[0]*10+a[1])*(a[2]*10+a[3]));
    }while(next_permutation(a,a+4));
    do{
        if(mx==(a[0]*10+a[1])*(a[2]*10+a[3])){
            m.push_back(make_pair((a[0]*10+a[1]), (a[2]*10+a[3])));
        }
    }while(next_permutation(a,a+4));
    sort(m.begin(), m.end(), cmp);
    out<<(m);
    return 0;
}

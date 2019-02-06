#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b){
    if(a.first>b.first){
        return false;
    }
    if(a.first<b.first){
        return true;
    }
    if(a.second.first<b.second.first){
        return true;
    }
    if(a.second.first>b.second.first){
        return false;
    }
    return a.second.second<b.second.second;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<pair<int, pair<int, int> > > a;
    for(int i=0;i<n;i++){
        int t1, t2, t3;
        in>>t1>>t2>>t3;
        a.push_back(make_pair(t1, make_pair(t2, t3)));
    }
    sort(a.begin(), a.end(), cmp);
    for(int i=0;i<n;i++){
        out<<a[i].first<<" "<<a[i].second.first<<" "<<a[i].second.second<<"\n";
    }
    return 0;
}
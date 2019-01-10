#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first<b.first;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k, tmp;
    in>>n>>k;
    vector<pair<int, int> > a;
    for(int i=0;i<n;i++){
        in>>tmp;
        a.push_back(make_pair(tmp, 0));
    }
    for(int i=0;i<n;i++){
        in>>tmp;
        a[i].second=tmp;
    }
    sort(a.begin(), a.end(), cmp);
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i].first;
    }
    long long s=0;
    for(int i=0;i<k;i++){
        s+=a[i].second;
    }
    out<<sum-s;
    return 0;
}

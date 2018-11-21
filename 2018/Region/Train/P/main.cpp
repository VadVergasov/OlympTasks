#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b){
    if(abs(a.second-b.second)<=0.0001){
        return a.first>b.second;
    }
    return a.second>b.second;
}

bool cmp(vector<double> a, vector<double> b){
    if(a[1]>b[1]){
        return false;
    }
    if(a[1]==b[1]){
        return a[6]>b[6];
    }
    return true;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp, m=0, num=0;
    double a, b, c, d;
    in>>n;
    vector<int> p, q;
    vector<vector<double> > u;
    vector<pair<int, double> > r;
    for(int i=0;i<n;i++){
        in>>tmp;
        m+=tmp;
        p.push_back(tmp);
    }
    u.resize(m);
    for(int i=0;i<n;i++){
        in>>tmp;
        q.push_back(tmp);
    }
    u.push_back({0, 0, 0, 0, 0, 0, -1});
    for(int i=0;i<m;i++){
        double sum=0;
        in>>tmp;
        u[i].push_back(tmp);
        in>>tmp;
        u[i].push_back(tmp);
        in>>a>>b>>c>>d;
        sum=a+b+c+d;
        u[i].push_back(a);
        u[i].push_back(b);
        u[i].push_back(c);
        u[i].push_back(d);
        u[i].push_back(sum);
    }
    sort(u.begin(), u.end(), cmp);
    for(int i=0;i<n;i++){
        int j=1;
        while((j<q[i]+1||abs(u[num+j][6]-u[num+j-1][6])<=0.0001&&q[i]!=0)&&to_string(u[num+j][6])!="0.000000"){
            r.push_back(make_pair(u[num+j][0], u[num+j][6]));
            j++;
        }
        num+=p[i];
    }
    out<<r.size()<<"\n";
    sort(r.begin(), r.end(), comp);
    for(int i=0;i<r.size();i++){
        out<<r[i].first<<" "<<r[i].second<<"\n";
    }
    return 0;
}

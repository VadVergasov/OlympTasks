#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, m, k, tmp1, tmp2;
    in>>n>>m>>k;
    vector<vector<int> > a(m, vector<int>(m));
    vector<pair<int, int> > coords;
    for(int i=0;i<n;i++){
        in>>tmp1>>tmp2;
        coords.push_back(make_pair(tmp1, tmp2));
    }
    int res=0;
    for(int i=0;i<n;i++){
        int num=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(floor(sqrt(pow(a[i].first-a[j].first, 2)+pow(a[i].second-a[j].second)))<=k+1){
                num++;
            }
        }

    }

    return 0;
}

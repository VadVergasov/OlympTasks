#include <bits/stdc++.h>

using namespace std;

int main(){
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, res=1;
    in>>n;
    vector<double> a;
    for(int i=0;i<n;i++){
        in>>tmp1>>tmp2;
        a.push_back((double)tmp1/(double)tmp2);
    }
    sort(a.begin(), a.end());
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            res++;
        }
    }
    out<<res;
    return 0;
}

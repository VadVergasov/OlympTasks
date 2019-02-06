#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<char> prime(1000000, 1);
    vector<pair<int, int> > res;
    for(int i=2;i<=1000;++i){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=0;
            }
        }
    }
    while(n>1){
        int num=n+1;
        while(!prime[num]){
            num++;
        }
        for(int i=0;i<(2*n-num)/2+1;i++){
            res.push_back(make_pair(n-i, num-n+i));
        }
        n=num-n-1;
    }
    for(int i=0;i<res.size();i++){
        out<<res[i].first<<" "<<res[i].second<<"\n";
    }
    return 0;
}

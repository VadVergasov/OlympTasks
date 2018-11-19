#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> a, b, c;
    long long sum1=0, sum2=0, sum3=0;
    for(int i=0;i<n;i++){
        cin>>tmp;
        sum1+=tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n-1;i++){
        cin>>tmp;
        a.push_back(tmp);
        sum2+=tmp;
    }
    cout<<sum1-sum2<<" ";
    for(int i=0;i<n-2;i++){
        cin>>tmp;
        a.push_back(tmp);
        sum3+=tmp;
    }
    cout<<sum2-sum3;
    return 0;
}

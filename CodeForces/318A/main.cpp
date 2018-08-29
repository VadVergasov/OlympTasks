#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin>>n>>k;
    if(k<=ceil((double)n/2)){
        cout<<(long long)(k*2-1);
    }else{
        cout<<(long long)((k-ceil((double)n/2))*2);
    }
    return 0;
}

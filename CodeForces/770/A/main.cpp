#include <bits/stdc++.h>

using namespace std;

char alf[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(){
    string res="";
    int n, k;
    cin>>n>>k;
    for(int j=0;j<k;j++){
        res+=alf[j];
    }
    int j=0;
    while(res.size()!=n){
        res+=alf[j];
        j++;
        j%=k;
    }
    cout<<res;
    return 0;
}

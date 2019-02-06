#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    string res="";
    while(in>>n){
        int n1=n, sum1=0, sum2=0;
        vector<int> p;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                p.push_back(i);
                n/=i;
            }
        }
        if(n>1&&n!=n1){
            p.push_back(n);
        }
        for(int i=0;i<p.size();i++){
            while(p[i]){
                sum2+=p[i]%10;
                p[i]/=10;
            }
        }
        while(n1){
            sum1+=n1%10;
            n1/=10;
        }
        if(sum1==sum2){
            out<<1;
        }else{
            out<<0;
        }
    }
    return 0;
}

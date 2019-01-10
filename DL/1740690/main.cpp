#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, k, c=0, z=0, o=0;
    in>>n>>k;
    char t;
    vector<char> a;
    for(int i=0;i<n;i++){
        in>>t;
        a.push_back(t);
        if(t=='('){
            c++;
        }else if(t=='1'){
            o+=pow(pow(2, k), 2)/pow(4, c);
        }else if(t=='0'){
            z+=pow(pow(2, k), 2)/pow(4, c);
        }else if(t==')'){
            c--;
        }
    }
    out<<z<<" "<<o;
    return 0;
}

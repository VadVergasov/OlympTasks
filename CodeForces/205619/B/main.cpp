#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<int> a;
    int t;
    in>>t;
    while(t!=0){
        a.push_back(t);
        in>>t;
    }
    sort(a.begin(), a.end());
    int pos1=a[0], pos2=a[1], i=2;
    vector<int>::iterator cur=lower_bound(a.begin()+2, a.end(), pos2);
    while(cur!=a.end()&&i<a.size()+2){
        int pos3=*cur;
        if(pos1+pos2>pos3&&pos1+pos3>pos2&&pos2+pos3>pos1){
            out<<"YES\n"<<pos1<<" "<<pos2<<" "<<pos3;
            return 0;
        }
        pos1=pos2;
        pos2=a[i];
        i++;
        cur=lower_bound(a.begin()+i, a.end(), pos2);
    }
    out<<"NO";
    return 0;
}
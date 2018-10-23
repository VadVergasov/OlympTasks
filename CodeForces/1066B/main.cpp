#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r, res=0;
    char tmp;
    cin>>n>>r;
    vector<char> a, b(n, '0');
    for(int i=0;i<n;i++){
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            for(int j=i-r+1;j<min(i+r, n);j++){
                b[j]++;
            }
            res++;
        }
    }
    if(res==0){
        cout<<-1;
        return 0;
    }
    if(r==1){
        if(res==n){
            cout<<n;
        }else{
            cout<<-1;
        }
        return 0;
    }
    /*for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }*/
    bool ready=false;
    while(!ready){
        int s=-1, e=-1;
        for(int i=0;i<n;i++){
            if(b[i]>'1'){
                if(s==-1){
                    s=i;
                }
            }else{
                e=i;
                if(s!=-1){
                    break;
                }
            }
        }
        if(e==-1){
            e=n;
        }
        if(s==-1){
            s=0;
        }
        //cout<<e<<" "<<s<<" "<<min(n, ((r-1)*2+1))<<endl;
        if(e-s<min((r-1)*2+1, n)){
            ready=true;
        }else{
            res--;
            for(int i=s;i<e;i++){
                b[i]--;
            }
        }
        /*for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }*/
    }
    cout<<res;
    return 0;
}

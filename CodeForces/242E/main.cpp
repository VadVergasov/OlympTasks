#include <bits/stdc++.h>

using namespace std;

int n, m, tmp, tmp1, tmp2, mx;
vector<long long> t;

void build(){
    for(int i=mx-1;i>0;i--){
        t[i]=t[2*i]+t[2*i+1];
    }
}

void update(int lp, int rp, int pos, int x, int v){
    if(lp==rp){
        t[v]^=x;
    }else{
        int m=(lp+rp)/2;
        if(pos<=m){
            update(lp, m, pos, x, v*2);
        }else{
            update(m+1, rp, pos, x, v*2+1);
        }
        t[v]=t[v*2]+t[v*2+1];
    }
}

long long get(int l, int r, int lp, int rp, int v){
    if(r<l){
        return 0;
    }
    if(l==lp&&r==rp){
        return t[v];
    }
    int m=(lp+rp)/2;
    return get(l, min(m, r), lp, m, v*2)+get(max(l, m+1), r, m+1, rp, v*2+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin>>n;
    t.resize(4*n);
    mx=(1<<(int)(log2(1.0*(n-1))+1));
    for(int i=0;i<n;i++){
        cin>>tmp;
        t[mx+i]=tmp;
    }
    build();
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>tmp;
        cin>>tmp1;
        cin>>tmp2;
        if(tmp==1){
            if(tmp1==tmp2){
                cout<<t[mx+tmp1-1]<<"\n";
                continue;
            }
            cout<<get(tmp1-1, tmp2-1, 0, mx-1, 1)<<"\n";
        }else{
            int x;
            cin>>x;
            for(int i=tmp1-1;i<tmp2;i++){
                update(0, mx-1, i, x, 1);
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int a[400002];

int main(){
    ios_base::sync_with_stdio(false);
    int q;
    cin>>q;
    int l=199999, r=200000;
    for(int i=0;i<q;i++){
        char tmp;
        cin>>tmp;
        if(tmp=='L'){
            int num;
            cin>>num;
            a[l]=num;
            l--;
        }else if(tmp=='R'){
            int num;
            cin>>num;
            a[r]=num;
            r++;
        }else{
            int num;
            cin>>num;
            for(int j=l;j<r;j++){
                if(a[j]==num){
                    cout<<min(j-l, r-j)-1<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}

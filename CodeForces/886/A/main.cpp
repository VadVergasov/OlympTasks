#include <bits/stdc++.h>

using namespace std;

int main(){
    bool res=false;
    int a[6], sum=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
    for(int i=0;i<6;i++){
        sum+=a[i];
    }
    if(sum%2==0){
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                for(int n=j+1;n<6;n++){
                    if(a[i]+a[j]+a[n]==sum/2){
                        res=true;
                        break;
                    }
                }
            }
        }
    }
    if(res){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

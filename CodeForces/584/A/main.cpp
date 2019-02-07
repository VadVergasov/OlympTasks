#include <bits/stdc++.h>

using namespace std;

short int n, k, tmp, i[100];

int main(){
    cin>>n>>k;
    i[0]=1;
    if(n*9<k){
        cout<<-1;
    }else{
        if(k==4&&n>2||k==8&&n>3){}
        if(k==2){
            i[0]=2;
        }
        if(k==4&&n==2){
            i[1]=2;
        }
        if(k==4&&n==1){
            i[0]=4;
        }
        if(k==8&&n==3){
            i[1]=6;
        }
        if(k==8&&n==2){
            i[1]=6;
        }
        if(k==8&&n==1){
            i[0]=8;
        }
        if(k==5){
            i[n-1]=5;
        }
        if(k==3&&n>=2||k==6&&n>=2){
            i[n-1]=2;
        }
        if(k==3&&n==1||k==6&&n<2){
            i[0]=6;
        }
        if(k==9&&n>=2){
            i[n-1]=8;
        }
        if(k==9&&n==1){
            i[0]=9;
        }
        if(k==7){
            for(int j=0;j<n;j++){
                i[j]=7;
            }
        }
        for(short int j=0;j<n;j++){
            printf("%d", i[j]);
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    vector<vector<int> > a(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            in>>a[i][j];
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=n-1;j>0;j--){
            if(a[i][j]<=a[i-1][j]&&a[i][j]<=a[i][j-1]){
                out<<i<<" "<<i+1<<"\n"<<j<<" "<<j+1;
                return 0;
            }else if(a[i][j]<=a[i-1][j]){
                out<<i<<" "<<i+1<<"\n"<<"-1 -1";
                return 0;
            }else if(a[i][j]<=a[i][j-1]){
                out<<"-1 -1\n"<<j<<" "<<j+1;
                return 0;
            }
        }
    }
    return 0;
}

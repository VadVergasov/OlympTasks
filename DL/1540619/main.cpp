#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<vector<char> > a(12, vector<char>(12, '.'));
    int cur=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            in>>a[i+1][j+1];
            if(a[i+1][j+1]=='#'){
                cur++;
            }
        }
    }
    int n, tmp1;
    char tmp2;
    in>>n;
    for(int i=0;i<n;i++){
        in>>tmp1>>tmp2;
        int x=tmp1, y=tmp2-'a'+1;
        if(tmp2>='j'){
            y=tmp2-'a';
        }
        if(a[x][y]=='#'){
            if(cur<=1){
                out<<"GAME OVER";
                return 0;
            }
            if(a[x-1][y]=='.'&&a[x][y-1]=='.'&&a[x][y+1]=='.'&&a[x+1][y]=='.'){
                out<<"DEAD\n";
            }else{
                out<<"HIT\n";
            }
            a[x][y]='.';
            cur--;
        }else{
            out<<"MISS\n";
        }
    }
    return 0;
}

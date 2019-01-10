#include <bits/stdc++.h>

using namespace std;

int main(){
    char x1, x2;
    int y1, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<min(abs(x1-x2), abs(y1-y2))<<" "<<max(abs(x1-x2), abs(y1-y2));
    return 0;
}

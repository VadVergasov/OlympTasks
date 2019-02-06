#include <bits/stdc++.h>

using namespace std;

int main(){
    int son=0;
	string ans[4]={"fantasy","forward","backward","both"};
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	if(s1.find(s2)!=-1&&s1.find(s3, s1.find(s2)+s2.size())!=-1){
        son+=1;
	}
	reverse(s1.begin(),s1.end());
	if(s1.find(s2)!=-1&&s1.find(s3, s1.find(s2)+s2.size())!=-1){
        son+=2;
	}
	cout<<ans[son];
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, first, tmp, res=0;
	cin>>n>>first;
	for(int i=0;i<n-1;i++){
		cin>>tmp;
		if(tmp==first){
			res++;
		}
	}
	cout<<res;
	return 0;
}

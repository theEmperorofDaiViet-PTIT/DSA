#include<bits/stdc++.h>
using namespace std;
long long Giaithua(long long n){
	if(n==0)
		return 1;
	else
		return(n*Giaithua(n-1));
}
main(){
	int T; cin>>T;
	while(T--){
		long long n; cin>>n;
		cout<<Giaithua(n)<<endl;		
	}
}

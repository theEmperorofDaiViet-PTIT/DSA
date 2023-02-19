#include<bits/stdc++.h>
using namespace std;
long long Fibo(long long n){
	if(n<2)
		return 1;
	else{
		return (Fibo(n-1)+Fibo(n-2));
	}
}
main(){
	int T; cin>>T;
	while(T--){
		long long n;
		cin>>n;
		cout<<Fibo(n)<<endl;
	}
}

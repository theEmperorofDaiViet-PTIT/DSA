#include<bits/stdc++.h>
using namespace std;
long long a,b;
long long GCD(long long a,long long b){
	long long temp;
	if(a==b)
		return a;
	else{
		temp=b;
		b=a%b;
		a=temp;
		return (GCD(a,b));
	}
}
main(){
	int T; cin>>T;
	while(T--){
		cin>>a>>b;
		cout<<GCD(a,b)<<" "<<endl;
	}
}

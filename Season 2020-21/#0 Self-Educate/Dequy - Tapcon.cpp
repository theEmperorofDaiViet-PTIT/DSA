#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int l=1;l<=k;l++)
				cout<<a[l];
			cout<<endl;
		}
		else
			Try(i+1);
	}
}
main(){
	int T; cin>>T;
	while(T--){
		cin>>n>>k;
		Try(1);
	}
}

#include<bits/stdc++.h>
using namespace std;
int n,k;
bool check(char a[]){
	int dem=0;
	for(int i=0;i<n-k;i++){
		if(a[i]=='A')
			dem++;
		else{
		//	if(dem==k)
				
			dem=0;
			continue;
		}
	}
	
	if(dem==k)
		return 1;
	return 0;
}
main(){
	cin>>n>>k;
	char a[n];	
	for(int i=0;i<n;i++)
		a[i]='A';
	
	bool ok=1;
	while(ok==1){
	//	if(check(a)==1){
		for(int v=0;v<n;v++)
			cout<<a[v];
		cout<<endl;
//	}
		int i=n-1;
		for(;i>=0 && a[i]=='B';i--){
		}
		if(i>=0){
			a[i]='B';
			for(int j=i+1;j<n;j++)
				a[j]='A';
		}
		else
			ok=0;
	}
}

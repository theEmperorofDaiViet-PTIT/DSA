#include<bits/stdc++.h>
using namespace std;
bool check(int k,int s,int a[]){
	int sum=0;
	for(int i=1;i<=k;i++)
		sum+=a[i];
	if(sum==s)
		return 1;
	return 0;
}
main(){
	while(1){
		int n,k,s;
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0)
			break;
		int a[k+1];
		for(int i=1;i<=k;i++)
			a[i]=i;		
		int dem=0;
		bool ok=1;
		while(ok==1){
			if(check(k,s,a)==1)
				dem++;
			int i=k;
			for(;i>0 && a[i]==n-k+i;i--){
			}
			if(i>0){
				a[i]=a[i]+1;
				for(int j=i+1;j<=k;j++)
					a[j]=a[i]+j-i;
			}
			else
				ok=0;
		}
		cout<<dem<<endl;
	}
}

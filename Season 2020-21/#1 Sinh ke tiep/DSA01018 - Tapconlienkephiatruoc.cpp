#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		int a[k+1];
		a[0]=0;
		for(int i=1;i<=k;i++)
			cin>>a[i];
		int i=k;
		bool ok=0;
		for(;i>0 && (a[i]==i || (a[i]-1)==a[i-1]);i--){
			if(a[i]-1==a[i-1])
				ok=1;
		}
		if(i>0){
			a[i]--;
			if(ok==1){
				for(int j=k;j>=i+1;j--)
					a[j]=n-k+j;				
			}
			else{
				for(int j=i+1;j<=k;j++)
					a[j]=a[i]+j-(n-k+i);
			}			
		}
		else if(i==0){
			for(int j=1;j<=k;j++)
				a[j]=n-k+j;
		}
		for(int j=1;j<=k;j++)
			cout<<a[j]<<" ";
		cout<<endl;			
	}
}

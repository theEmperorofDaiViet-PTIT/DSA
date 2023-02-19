#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		int a[n+1];
		for(int i=n,j=1;j<=n;i--,j++)
			a[j]=i;
		bool ok=1;
		while(ok==1){
			for(int i=1;i<=n;i++)
				cout<<a[i];
			cout<<" ";
			int i=n-1;
			for(;i>0 && a[i]<a[i+1];i--){
			}
			if(i>0){
				int j=n;
				for(;j>i && a[i]<a[j];j--){
				}
				swap(a[i],a[j]);
				int s=i+1,e=n;
				while(s<=e){
					swap(a[s],a[e]);
					s++; e--;
				}
			}
			else
				ok=0;
		}
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N,K; cin>>N>>K;
		int A[1000];
		for(int i=1;i<=K;i++)
			cin>>A[i];
		int i=K;
		for(;(i>0) && (A[i]==N-K+i);){
			i--;			
		}
		if(i>0){
			A[i]+=1;
			for(int j=i+1;j<=K;j++)
				A[j]=A[i]+j-i;
		}	
		for(int j=1;j<=K;j++)
			cout<<A[j]<<" ";
		cout<<endl;
	}
}

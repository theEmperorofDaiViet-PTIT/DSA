#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int A[1000];
		for(int i=1;i<=N;i++)
			cin>>A[i];
		int i=N-1;
		for(;i>0 && A[i]>A[i+1];i--){
		}
		int k=N;
		for(;k>i && A[k]<A[i];k--){
		}	
		swap(A[k],A[i]);
		int a=i+1,b=N;
		while(a<=b){
			swap(A[a],A[b]);
			a++; b--;
		}
		for(int i=1;i<=N;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
}

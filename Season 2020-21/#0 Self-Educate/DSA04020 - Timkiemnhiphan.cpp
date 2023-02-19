#include<bits/stdc++.h>
using namespace std;
int N,K,A[100000];
int conquer(int low,int high){
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(A[mid]==K)
		return mid;
	if(K<A[mid])
		return conquer(low,mid-1);
	if(K>A[mid])
		return conquer(mid+1,high);
	
}
main(){
	int T; cin>>T;
	while(T--){
		cin>>N>>K;
		for(int i=1;i<=N;i++)
			cin>>A[i];
		int low=1,high=N;
		if(conquer(low,high)==-1)
			cout<<"NO"<<endl;
		else
			cout<<conquer(low,high)<<endl;
	}
}

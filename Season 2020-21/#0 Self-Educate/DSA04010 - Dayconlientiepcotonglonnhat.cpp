#include<bits/stdc++.h>
using namespace std;
int N,a[100];
int max3so(int a,int b,int c){
	return max(max(a,b),c);
}
int Tongmax(int low,int mid,int high){
	int sum=0,leftsum=INT_MIN,rightsum=INT_MIN;
	for(int i=mid;i>=1;i--){
		sum+=a[i];
		leftsum=max(leftsum,sum);
	}
	sum=0;
	for(int i=mid+1;i<=N;i++){
		sum+=a[i];
		rightsum=max(rightsum,sum);
	}
	return max3so(leftsum,rightsum,leftsum+rightsum);	
}
int conquer(int low,int high){
	if(low==high)
		return a[low];
	int mid=(1+N)/2;
	return max3so(conquer(1,mid),conquer(mid+1,N),Tongmax(1,mid,N));
}
main(){
	int T; cin>>T;
	while(T--){
		cin>>N;
		for(int i=1;i<=N;i++)
			cin>>a[i];
		cout<<conquer(1,N)<<endl;		
	}
}

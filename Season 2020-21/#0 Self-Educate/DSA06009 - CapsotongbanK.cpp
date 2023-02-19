#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		int A[n];
		map<int,int> count;
		for(int i=0;i<n;i++){
			cin>>A[i];
			count[A[i]]++;
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(A[i]==k-A[i]){
				dem+=count[A[i]]*(count[k-A[i]]-1)/2;
				count[A[i]]=0; count[k-A[i]]=0;
			}
			else{
				dem+=count[A[i]]*count[k-A[i]];
				count[A[i]]=0; count[k-A[i]]=0;
			}			
		}
		cout<<dem<<endl;
	}
}

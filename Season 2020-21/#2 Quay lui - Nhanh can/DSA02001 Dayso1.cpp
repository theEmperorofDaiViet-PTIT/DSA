#include<iostream>
using namespace std;
int A[100],B[100],n;
int DeQuy(int n){
	cout<<"[";	
	for(int i=1;i<=n;i++){	
	cout<<B[i];
	if(i<=n-1)
	cout<<" ";
	}
	cout<<"]"<<endl;
	for(int i=1;i<=n;i++){	
			A[i]=B[i]+B[i+1];
		}
	n--;
	for(int i=1;i<=n;i++)
	B[i]=A[i];
	if(n<1)
	return 0;
	else
	return (DeQuy(n));	
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>B[i];
		DeQuy(n);	
	}
	}		

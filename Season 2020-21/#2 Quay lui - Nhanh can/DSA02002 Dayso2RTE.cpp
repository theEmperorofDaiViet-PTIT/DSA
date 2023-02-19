#include<iostream>
using namespace std;
int A[100],B[100],C[100],n,m;
int DeQuy(int n,int m){
	for(int i=1;i<=n;i++){
		C[i+m]=B[i];
	}
	for(int i=1;i<=n-1;i++){	
			A[i]=B[i]+B[i+1];
		}
	m+=n;	
	n--;
	for(int i=1;i<=n;i++)
	B[i]=A[i];
	if(n<1)
	return 0;
	else
	return (DeQuy(n,m));	
	}
int inKQ(int n, int p, int c){
		
	cout<<"[";
	for(int j=p-n;j<=p;j++){
		cout<<C[j];
	if(j<=p-1)	
		cout<<" ";
	}
	cout<<"] "<<endl;
	n++;
	p=p-n;
	if(n>=c)	
	return 0;
	else (inKQ(n,p,c));
}	
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n; 
		for(int i=1;i<=n;i++)
			cin>>B[i];
		DeQuy(n,m);
		int p=0,c=n;
		while(n>=1){	
				p+=n;
				n--;
			}
			
			
		inKQ(n,p,c);
		}
	}		

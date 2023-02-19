#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int N; cin>>N;
		int k=1,X[11];
		X[k]=N;
		cout<<"("<<X[k]<<")"<<" ";	
		bool ok=1;
		while(ok==1){
			int i=k,R,S,D;
			for(;i>0 && X[i]==1;i--){
			}
			if(i>0){
				X[i]--;
				D=k-i+1;
				R=D/X[i];
				S=D%X[i];
				k=i;
				if(R>0){
					for(int j=i+1;j<=i+R;j++)
						X[j]=X[i];
					k+=R;
				}
				if(S>0){
					k++;
					X[k]=S;
				}
				cout<<"(";
				for(int j=1;j<=k;j++){					
					if(j==k){
						cout<<X[j]<<")"<<" ";
						break;
					}
					cout<<X[j]<<" ";	
				}					
			}
			else
				ok=0;
		}
		cout<<endl;
	}
}

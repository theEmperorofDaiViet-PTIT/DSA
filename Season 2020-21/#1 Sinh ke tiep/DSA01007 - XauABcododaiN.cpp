#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		string s;
		for(int i=0;i<n;i++)
			s[i]='A';		
		bool ok=1;
		while(ok==1){
			for(int i=0;i<n;i++){
				cout<<s[i];
			}
			cout<<" ";
			int i=n-1;
			for(;i>=0 && s[i]=='B';i--){
			}
			if(i>=0){
				s[i]='B';
				for(int j=i+1;j<n;j++)
					s[j]='A';		
			}				
			else
				ok=0;				
		}
		cout<<endl;
	}
}

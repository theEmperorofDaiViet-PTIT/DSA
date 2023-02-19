#include<bits/stdc++.h>
using namespace std;
main(){
	int n; cin>>n;
	string s;
	for(int i=0;i<n;i++)
		s[i]='0';
	bool ok=1,okay=1;
	while(ok==1){
		for(int i=0;i<n;i++){
			if(s[i]!=s[n-1-i]){
				okay=0;
				break;
			}				
		}		
		if(okay==1){
			for(int i=0;i<n;i++)
				cout<<s[i]<<" ";
			cout<<endl;
		}
		okay=1;		
		int i=n-1;
		for(;i>=0 && s[i]=='1';i--){
		}
		if(i>=0){
			s[i]='1';
			for(int j=i+1;j<n;j++)
				s[j]='0';
		}
		else
			ok=0;
	}
}

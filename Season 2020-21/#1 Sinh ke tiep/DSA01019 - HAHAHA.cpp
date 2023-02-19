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
			bool okay=1;
			if(s[0]!='H' || s[n-1]!='A')
				okay=0;
			for(int i=0;i<n-1;i++){
				if(s[i]=='H' && s[i+1]=='H'){
					okay=0;
					break;
				}
			}
			if(okay==1){
				for(int i=0;i<n;i++)
					cout<<s[i];
				cout<<endl;
			}
			int i=n-1;
			for(;i>=0 && s[i]=='H';i--){
			}
			if(i>=0){
				s[i]='H';
				for(int j=i+1;j<n;j++)
					s[j]='A';
			}
			else
				ok=0;
		}
	}
}

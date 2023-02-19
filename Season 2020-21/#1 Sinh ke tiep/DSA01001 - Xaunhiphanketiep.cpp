#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		bool ok=1;
		int i=s.length()-1;		
		for(;i>=0 && s[i]!='0';i--){
			s[i]='0';			
		}
		if(i>=0)
			s[i]='1';
		cout<<s<<endl;	
	}
}

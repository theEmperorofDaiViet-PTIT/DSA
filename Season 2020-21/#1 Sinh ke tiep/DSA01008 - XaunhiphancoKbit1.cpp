#include<bits/stdc++.h>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,k; cin>>n>>k;
		string s;
		for(int i=0;i<n;i++)
			s[i]='0';
		bool ok=1,okay=0;
		while(ok==1){
			if(okay==1){
				for(int i=0;i<n;i++)
					cout<<s[i];
				cout<<endl;
				okay=0;
			}
			int i=n-1,dem=0;
			for(;i>=0 && s[i]=='1';i--){
			}
			if(i>=0){
				s[i]='1';
				for(int j=i+1;j<n;j++)
					s[j]='0';
				for(int j=0;j<n;j++)
					if(s[j]=='1')
						dem++;
				if(dem==k)
					okay=1;
			}
			else
				ok=0;
		}
	}
}

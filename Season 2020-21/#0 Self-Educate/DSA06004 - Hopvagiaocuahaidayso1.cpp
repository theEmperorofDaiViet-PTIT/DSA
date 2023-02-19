#include<bits/stdc++.h>
#include<set>
using namespace std;
main(){
	int T; cin>>T;
	while(T--){
		int n,m; cin>>n>>m;
		set<int> A;
		set<int> B;
		while(n--){
			int i; cin>>i;
			A.insert(i);
		}
		while(m--){
			int j; cin>>j;
			B.insert(j);
		}
		set<int> hop;
		for(auto a: A)
			hop.insert(a);
		for(auto b: B)
			hop.insert(b);
		set<int> giao;
		pair<set<int>::iterator,bool> ret;
		for(auto x: B){
			if(A.find(x)!=A.end())
				giao.insert(x);
		}
		for(auto x: A){
			if(B.find(x)!=B.end())
				giao.insert(x);
		}
		for(auto x:hop)
			cout<<x<<" ";
		cout<<endl;
		for(auto y:giao)
			cout<<y<<" ";
		cout<<endl;
	}
}

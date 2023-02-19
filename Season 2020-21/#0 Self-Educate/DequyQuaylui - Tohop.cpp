#include<bits/stdc++.h>
using namespace std;
int N,X[1000],K;
void Try(int i){
	for(int j=X[i-1]+1;j<=N-K+i;j++){
		X[i]=j;
		if(i==K){
			for(int k=1;k<=K;k++)
				cout<<X[k]<<" ";
			cout<<endl;
		}
		else
			Try(i+1);
	}
}
main(){
	cin>>N>>K;
	Try(1);
}

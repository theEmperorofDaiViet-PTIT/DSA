#include<bits/stdc++.h>
using namespace std;
int N,X[1000];
bool chuaxet[1000];
void Try(int i){
	for(int j=1;j<=N;j++){
		if(chuaxet[j]==true){
			X[i]=j; chuaxet[j]=false;
			if(i==N){
				for(int k=1;k<=N;k++)
					cout<<X[k]<<" ";
					cout<<endl;
			}
			else
				Try(i+1);
			chuaxet[j]=true;
					
		}
	}
}
main(){
	cin>>N;
	for(int i=1;i<=N;i++)
		chuaxet[i]=true;
	Try(1);
	
}

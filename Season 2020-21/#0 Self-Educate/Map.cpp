#include<bits/stdc++.h>
using namespace std;
main(){
	map<int,string> crushofKT;
		crushofKT[5]="Minh";
		crushofKT[1]="CaCO3";
		crushofKT[3]="Huyen";
		crushofKT[2]="Oanh";
		crushofKT[4]="HyeYoon";
		crushofKT[6]="Minh";
	map<int,string>::iterator it;
	it=crushofKT.begin();
	for(int i=5;i>0;i--)
		it++;
	cout<<it->second;
}

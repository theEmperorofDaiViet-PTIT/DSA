#include<bits/stdc++.h>
using namespace std;

main(){
	int a[]={1,2,43,69,62,72,7};
	set<int> taphop(a,a+7);
	set<int>::iterator it;
	pair<set<int>::iterator,bool> ret;
	it=taphop.begin();
	for(int k=3;k>0;k--)
		it++;
	taphop.insert(1);
	taphop.insert(2001);
//		ret=taphop.insert(1);
//	cout<<boolalpha<<ret.second<<endl;
	taphop.insert(taphop.begin(),5);
	for(auto x: taphop)
		cout<<x<<" ";
	cout<<endl;
	it=taphop.begin();
	for(int k=3;k>0;k--)
		it++;
	taphop.erase(it);
	for(auto x: taphop)
		cout<<x<<" ";
	cout<<endl;
	cout<<taphop.count(7)<<endl;	
	it=taphop.lower_bound(2002);
	if(it!=taphop.end())
		cout<<*it;
//	cout<<*it<<endl;
//	pair <string, string> giadinhhanhphuc={"Khiet To","Minh" };
//	cout<<giadinhhanhphuc.first<<" "<<giadinhhanhphuc.second<<endl;
}

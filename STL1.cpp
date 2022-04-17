#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
using namespace std;



int main(){

// vector

	// vector<int> v;
	// for(int i=0;i<5;i++){
 //           // v[i] = i+1;
	// 	v.push_back(i+1);
	// }
	// vector<int>::iterator it;

	// for(it=v.begin();it!=v.end();it++){
	// 	cout<<it<<endl;
	// }


// string

	// string s = "Parikh";
	// string s1(s);
	// // string s1(s,2,4);
	// cout<<s<<endl;
	// cout<<s1<<endl;

	// string s2 = s.substr(1,4);
	// cout<<s2<<endl;

	// if(s1.compare(s2) == 0){
	// 	cout<<s1<<"is equal"<<s2<<endl;
	// }
	// else{
	// 	cout<<s1<<"is not equal to"<<s2<<endl;
	// }

// Pair

	// pair<int,char> p;
	// p = make_pair(2,'b');
	// pair<int,char> p2(1,'a');

	// cout<<p.first << " " <<p.second<<endl;
	// cout<<p2.first <<" " <<p2.second<<endl;

// set

// set<int> s;
// int arr[] = {1,2,3,4,5,6,5};

// for(int i=0;i<7;i++){
// 	s.insert(arr[i]);
// }

// set<int>::iterator it;

// for(it=s.begin();it!= s.end();it++){
// 	cout<<*it<<endl;
// }
// if(s.find(6) ==s.end()){
// 	cout<<"Element not found"<<endl;


// }
// else{
// 	cout<<"Element found"<<endl;

// }

// Map

int arr[] = {1,2,3,4,5,6,5};

map<int,int> m;

for(int i=0;i<7;i++){
	m[arr[i]] = m[arr[i]] + 1;
}
 
 map<int,int>::iterator it;
 for(it=m.begin();it!=m.end();it++){
 	cout<<it->first<<" :"<<it->second<<endl;
 }





	return 0;
}
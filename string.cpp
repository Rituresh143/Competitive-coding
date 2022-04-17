#include<iostream>
using namespace std;

int main()
{
	// Dynamic string
	string* sp = new string;
	*sp = "def";
	cout<<sp<<endl;
	cout<<*sp<<endl;

	string s = "abc";
	// string s1;
	// s1 = "def";
	// cout<<s1<<endl;
	getline(cin,s);
	cout<<s<<endl;
	
	// static string allocation
	s = "defdef";
	cout<<s[0]<<endl;
    s[0] = 'a';
    string s1;
    s1 = "def";

    string s2 = s + s1;
    cout<<s2<<endl;

    cout<<s1<<endl;
    cout<<s<<endl;
   
   // to give some part of string
    cout<<s.substr(3)<<endl;
    cout<<s.substr(3,1)<<endl;

    cout<<s.find("def")<<endl;


	// string s = "abc";
	// s1 = "def";
	// cout<<s1<<endl;
	// cout<<s<<endl;
}
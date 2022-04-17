#include<bits/stdc++.h>
using namespace std;

int unsetBit(int n,int i)
{
	if(n&(1<<i))
	{
		return (n&~(1<<i));
	}
	else{
		return n;
	}
}

int main(){

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i;
		cin>>i;
		cout<<unsetBit(n,i)<<endl;
	}
return 0;
}
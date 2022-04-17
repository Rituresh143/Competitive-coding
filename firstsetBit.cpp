#include<bits/stdc++.h>
using namespace std;

int firstBit(int n)
{
	if(n==0)
	{
		return 0;
	}
	int i=0;
	while((n&(1<<i))==0)
	{
	      i++;	
	}
	return (n&(1<<i));
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<firstBit(n)<<endl;
	}

	return 0;

}
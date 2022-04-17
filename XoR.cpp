#include<bits/stdc++.h>
using namespace std;

int XOR(int n)
{
	if(n% 4==0)
		return n;
	if(n % 4 == 1)
		return 1;
	if(n % 4 ==2 )
		return n+1;

	return 0;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<XOR(n)<<endl;
	}

return 0;

}
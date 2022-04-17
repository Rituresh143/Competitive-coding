#include<bits/stdc++.h>
using namespace std;


int turnBit(int n)
{

	if(n==0)
	{
		return 0;
	}
	int i;
	 while((n&(1<<i))==0)
    {
        i++;
    }
    return n^(1<<i);



}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<turnBit(n)<<endl;
	}

	return 0;

}
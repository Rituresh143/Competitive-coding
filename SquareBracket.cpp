#include<bits/stdc++.h>
using namespace std;

int properBracket(bool *arr,int n,int openingBracket,int closingBracket,int **dp)
{
	if(arr[0])
	{
		return 0;
	}
	if(dp[openingBracket][closingBracket]>=0)\
	{
		return dp[openingBracket][closingBracket];
	}
	if(closingBracket>n || openingBracket>n)
	{
		return 0;
	}
	if(closingBracket==n && closingBracket==n)
	{
		return 1;
	}
	int ans;
	if(closingBracket==openingBracket||arr[openingBracket+closingBracket+1])
	{
		ans=properBracket(arr,n,openingBracket+1,closingBracket, dp);

	}
	else if(openingBracket==n)
	{
		ans=properBracket(arr,n,openingBracket,closingBracket+1,dp);

	}
	else
	{
		int opt1 = properBracket(arr,n,openingBracket+1,closingBracket,dp);
		int opt2 = properBracket(arr,n,openingBracket,closingBracket+1,dp);

		ans=opt1+opt2;

	}

	dp[openingBracket][closingBracket]=ans;

	return ans;
}


int main(){

	int d;
	cin>>d;
	while(d--)
	{
		int n, k;
		cin>>n>>k;
		bool *boolean_arr=new bool [2*n+1];
		for(int i=0; i<=2*n; i++)
		{
			boolean_arr[i]=false;
		}
		for(int i=0; i<k; i++)
		{
			int element;
			cin>>element;
			boolean_arr[element]=true;
		}
		int **dp=new int *[21];
		for(int i=0; i<=20; i++)
		{
			dp[i]=new int [21];
			for(int j=0; j<21; j++)
			{
				dp[i][j]=-1;
			}
		}
		cout<<properBracket(boolean_arr, n, 0, 0, dp)<<endl;
	}

}
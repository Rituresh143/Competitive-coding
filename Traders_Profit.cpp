#include<bits/stdc++.h>
using namespace std;

int maxprofit(int *arr,int n,int k,int transiction,int ***dp){

	if(n==0){
		return 0;
	}
	if(k==0){
		return 0;
	}
	if(dp[n][k][transiction]>=0)
	{
		return dp[n][k][transiction];
	}

	int opt1 = maxprofit(arr+1,n-1,k,transiction,dp);
	int opt2;
	if(transiction==1)
	{
		opt2=maxprofit(arr+1,n-1,k-1,0,dp)+arr[0];
	}

	else
	{
		if(k>0)
		{
			opt2=maxprofit(arr+1,n-1,k,1,dp)-arr[0];
		}
	}

	dp[n][k][transiction]=max(opt1,opt2);
	return dp[n][k][transiction];
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int k;
		cin>>k;
		int n;
		cin>>n;
		int *arr=new int [n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ***dp=new int**[n+1];
		for(int i=0; i<=n; i++)
		{
			dp[i]=new int *[k+1];
			for(int j=0; j<k+1; j++)
			{
				dp[i][j]=new int [2];
				for(int p=0; p<2; p++)
				{
					dp[i][j][p]=-1;
				}
			}
		}
		cout<<maxprofit(arr, n, k, 0, dp)<<endl;
		for(int i=0; i<n+1; i++)
		{
			for(int j=0; j<k+1; j++)
			{
				delete[]dp[i][j];
			}
			delete[]dp[i];
		}
		delete[]dp;
	}
}



#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;



int solve(int arr[],int n){

	int maxVal = INT_MIN;
	int dp[n+1][105];
	for(int i=0;i<n;i++){
		for(int j=0;j<=100;j++)
		{
			dp[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		maxVal = max(arr[i],maxVal);
		dp[i][arr[i]] = 1;

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{

			if(arr[i] > arr[j])
			{
				for(int k=1;k<=maxVal;k++)
				{
					int x = __gcd(k,arr[i]);
					dp[i][x] += dp[j][k];
					if(dp[i][x] >= mod)
						dp[i][x] -= mod;
				}
			}
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		ans += dp[i][1];
		if(ans >= mod)
			ans -= mod;
	}

	return ans;

}

int main(){

	int t;
	cin>>t;
	while(t--)
	{

		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<solve(arr,n)<<endl;
	}


}
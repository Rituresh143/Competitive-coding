#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &mat,int n,int m)
{
	vector<vector<int>> hp(n+1,vector<int>(m+1,INT_MAX));

	hp[n][m-1] = 1;
	hp[n-1][m] = 1;

	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-1;j>=0;j--)
		{
			int need = min(hp[i+1][j],hp[i][j+1])-mat[i][j];
			hp[i][j] = need <=0 ? 1 : need;

		}
	}

	return hp[0][0];
}

int main()
{
	int t;
	cin>>t;
	while(t--){

		int n,m;
		cin>>n>>m;
		vector<vector<int>> mat(n, vector<int>(m));

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>mat[i][j];
			cout<<solve(mat,n,m)<<endl;

	}
}
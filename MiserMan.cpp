#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin>>a[i][j];
    int dp[n][m];
    for(int i=0;i<m;i++)
        dp[0][i]=a[0][i];
    
    for(int i=1;i<n;i++)
    for(int j=0;j<m;j++)
    {
        int l,e,r;
        l=(j>0)?(dp[i-1][j-1]):INT_MAX;
		e=dp[i-1][j];
    	r=(j<m-1)?dp[i-1][j+1]:INT_MAX;
		dp[i][j]=a[i][j]+min(e,min(l,r));
    }
    int ans=INT_MAX;
    for(int j=0;j<m;j++)
        if(dp[n-1][j]<ans)
            ans=dp[n-1][j];
    cout<<ans<<"\n";
    }
    
    return 0;
}
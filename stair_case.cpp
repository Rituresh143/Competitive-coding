#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long staircase(int n){
	long* dp = new long[n+1];
    dp[0] = 1;
	for(int i=1; i<=n; i++){
        if(i==1)
        {
            dp[i] = dp[i-1];
        }
        else if(i==2){
            dp[i] = (dp[i-1] + dp[i-2])%m;
            //dp[i] = dp[i-1] + dp[i-2];
        }
        else{
            dp[i] = ((dp[i-1] + dp[i-2])%m + dp[i-3])%m;
            //dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        } 
    }
        
	return dp[n];

}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test; 
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << staircase(n) << endl;
        
    }
    

	return 0;
    
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Solve(vector<vector<int> >&arr,int n,ll mask,int row,vector<ll> &dp){
    
    if(mask==(1<<n)-1){
        //all ones
        return 1;
    }
    if(dp[mask]!= -1){
        return dp[mask];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(!(mask&(1<<(n-i-1))) && arr[row][i]){
            ans += Solve(arr,n,mask|(1<<(n-i-1)),row+1,dp);
        }
    }
    dp[mask] = ans;
    return ans;
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int> > arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        ll mask = 0;
        int row = 0;
        vector<ll> dp(1<<n);
        for(int i=0;i<(1<<n);i++){
            dp[i] = -1;
        }
        
        ll ans = Solve(arr,n,mask,row,dp);
        cout<<ans<<endl;
    }
    return 0;
}
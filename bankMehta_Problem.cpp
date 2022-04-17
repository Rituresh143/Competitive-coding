#include <bits/stdc++.h>
using namespace std;
int solve(vector<pair<int, int>> &arr, int n, int w)
{
int dp[2][n + 1][w + 1];
memset(dp, 0, sizeof(dp));
sort(arr.begin(), arr.end());
// First 10 primes
int primes[11] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
// first case without considering the primes
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= w; j++)
{
dp[0][i][j] = dp[0][i - 1][j];
if (j >= arr[i - 1].second)
{
dp[0][i][j] = max(dp[0][i][j], dp[0][i - 1][j - arr[i -
1].second] + arr[i - 1].first);
}
}
}
for (int prime = 1; prime <= 10; prime++)
{
int p = prime % 2;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= w; j++)
{
dp[p][i][j] = dp[p][i - 1][j];
if (j >= arr[i - 1].second)
{
int temp = max(dp[p][i - 1][j - arr[i -
1].second] + arr[i - 1].first,
dp[p ^ 1][i - 1][j -
arr[i - 1].second] + arr[i - 1].first * primes[prime]);
dp[p][i][j] = max(dp[p][i][j], temp);
}
}
}
}
return dp[0][n][w];
}
int main()
{
int t;
cin >> t;
while (t--)
{
int n, w;
cin >> n >> w;
vector<pair<int, int>> arr(n);
for (int i = 0; i < n; i++)
{
cin >> arr[i].first;
}
for (int i = 0; i < n; i++)
{
cin >> arr[i].second;
}
    cout << solve(arr, n, w) << endl;
}
}
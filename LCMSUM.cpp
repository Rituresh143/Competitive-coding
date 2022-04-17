#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
using namespace std;
lli res[1000005] , phi[1000005];
void init()
{
	int mx = 1000000;
	REP(i , mx)
	phi[i] = i;
 
	for(int i=2;i<=mx;i++)
	if(phi[i] == i)
	{
		phi[i] /= i , phi[i] *= i-1;
 
		for(int j=2*i;j<=mx;j+=i)
		phi[j] /= i , phi[j] *= i - 1;
	}
 
	REP(i , mx)
	{
		for(int j=i;j<=mx;j+=i)
		res[j] += phi[i] * i;
	}
}
int main()
{
	lli t , n ;
	cin>>t;
	init();
	while(t--)
	{
		cin>>n;
		lli ans = (res[n] - 1)*n;
		ans /= 2;
		cout<<ans + n<< endl;
	}
}
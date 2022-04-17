#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mincost(ll *arr,ll n)
{
	
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		count+=pow(2,i)*arr[n-1-i];
	}

	return count;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll *arr = new ll [n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		cout<<mincost(arr,n)<<endl;
	}
}
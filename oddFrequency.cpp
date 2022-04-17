#include<bits/stdc++.h>
using namespace std;

int oddFrequency(int arr[],int n)
{
	int result=0;

	for(int i=0;i<n;i++)
	{
		result ^= arr[i];
	}

	return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			// int arr[i];
			cin>>arr[i];
		}
		cout<<oddFrequency(arr,n)<<endl;
	
}
	return 0;

}
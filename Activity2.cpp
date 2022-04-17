#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b){
	return a.second < b.second;
}

int maxActivity(pair<int,int>*arr,int n)
{
	sort(arr,arr+n,comp);
	int end=arr[0].second;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(end<=arr[i].first)
		{
			count+=1;
			end=arr[i].second;
		}

	}

	return count;
}

int main(){
      
      int n;
      cin>>n;
      pair<int,int>* arr = new pair<int,int>[n];
      for(int i=0;i<n;i++)
      {
      	cin>>arr[i].first>>arr[i].second;
      
      }
      	cout<<maxActivity(arr,n)<<endl;
 }
#include<bits/stdc++.h>
using namespace std;


int knapsack(int wt[],int val[],int n,int w){

	int mat[2][w+1];
	memset(mat,0,sizeof(mat));

	for(int i=0;i<n;i++)
	{
		int j=0;
		while(j++ <= w)
		{
			if(wt[i] <= j)
			{
				mat[i%2][j] = max(val[i] + mat[(1+i)%2][j-wt[i]], mat[(i+1)%2][j]);
			}
			else
			{
				mat[i%2][j] = mat[(i+1)%2][j];
			}
		}
	}
	return mat[(n+1)%2][w];
}


int main(){

	int n;
	cin>>n;
	int wt[n], val[n];
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
		for(int j=0;j<n;j++)
		{
			cin>>val[j];
		}
	int w;
	cin>>w;
	cout<<knapsack(wt,val,n,w)<<endl;

}
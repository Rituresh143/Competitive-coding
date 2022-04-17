#include<bits/stdc++.h>
using namespace std;


int kadene(vector<int>v,int n){
	int ma = INT_MIN;
	int untill = 0;
	for(int i=0;i<n;i++){
		untill += v[i];
		if(untill > ma) ma = untill;
		if(untill < 0) untill = 0;

	}
	return ma;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		vector<vector<int>>mat(r,vector<int>(c));
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>mat[i][j];
			}
		}

		int ma = INT_MIN;
		for(int i=0;i<r;i++){
			vector<int> ans(c);
			for(int j=i;j<r;j++){
				for(int col=0;col<c;col++){
					ans[col] += mat[j][col];
				}

				ma = max(ma,kadene(ans,c));
			}
		}

		cout<<ma<<endl;
	}

	return 0;
}
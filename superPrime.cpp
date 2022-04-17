#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>cnt(n+1,0);

	for(int i=2;i<=n;i++){
		if(cnt[i] == 0){
			for(int j=2;j*i<=n;j++){
				cnt[i*j]++;
			}
		}
	}

	cout<<count(cnt.begin(),cnt.end(),2)<<endl;
	return 0;
}
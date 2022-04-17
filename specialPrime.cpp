#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<bool>cnt(n+2,true);
	cnt[0]=false;
	cnt[1]=false;
	
	for(int i=2;i*i<=n;i++){
		if(cnt[i]){
			for(int j=i*i;j<=n;j+=i){
				cnt[j]=false;
			}
		}
	}

	vector<int> primes;

	for(int i=2;i<=n;i++){
		if(cnt[i]) primes.push_back(i);
	}

	unordered_set<int> set;
	for(int i = 1 ; i < primes.size() ; ++i) {
		set.insert(primes[i-1] + primes[i]);
	}

	int count = 0;
	for(int i = 2 ; i <= n ; ++i) {
		if(cnt[i] && set.count(i-1)) ++count;
	}

	cout << count << '\n';

	return 0;

}
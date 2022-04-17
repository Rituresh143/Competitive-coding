#include<iostream>
using namespace std;
#define ll long long
#define ld long double
#define sfa(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()



void solve() {
	string s; cin>>s;
	if(sfa(s)%2!=0) cout<<"NO\n";
	else{
		ll p = sfa(s)/2;
		string ans = "YES";
		for(ll i=0;i<p;i++){
			if(s[i]!=s[p+i]){
				ans="NO";
				break;
			}
		}

		cout<<ans<<"\n";
	}
}

int main(){

	int t;
	cin>>t;
	for(int n=1;n<=t;n++){
		solve();
	}
}
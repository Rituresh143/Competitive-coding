#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,m;
		string s;
		cin>>a>>m>>s;
		int n = s.size()-1;
		ll result=1;
		while(n >= 0)
		{
			if(s[n] == '1')
			{
				result = (result*a) % m;

			}
			else if(s[n] == '2')
			{
				result = (((result * a) % m) * a) %m;
			}
			a = ((((a % m) * (a % m)) % m) * (a % m)) % m;
			n--;
		}
		cout<<result<<endl;

	}
	return 0;
}

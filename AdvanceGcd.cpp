#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{

    if (b==0)
    return a;
    else
    return gcd(b,a%b);
}

void gcd2(int a,string b){
	if(!a){
		cout<<b<<endl;
		return ;
	}

	int mod=0;
	for(int i=0;i<b.length(); i++){
		mod = (mod*10+b[i]-'0')%a;
	}

	cout<<gcd(a,mod)<<endl;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		string b;
		cin>>a>>b;

		gcd2(a,b);

	}


	return 0;
}
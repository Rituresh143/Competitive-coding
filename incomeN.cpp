#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll const m = 1000000007;

ll power(ll a,ll b);
ll func(ll* arr,ll n);
void mult(ll [2][2],ll[2][2]);

int main(){

	int t;
	cin>>t;
	while(t--){
		ll f0,f1,n;
		cin>>f0>>f1>>n;
		ll A[2][2] = {{1,1},{1,0}};
		n=n-1;
		ll B[2][2] = {{1,0},{0,1}};
		while(n>0){
			if(n%2==1)
                 mult(B,A);
             n=n/2;
             mult(A,A);
		}
		ll result =  ((power(f0+1,B[0][1])*power(f1+1,B[0][0]))%m - 1 + m)%m;
		cout<<result<<endl;
	}
}

ll power(ll a,ll b){
	 ll result = 1;
    while(b>0)
    {
        if(b%2==1)
            result = (result*a)%m;
        a = (a*a)%m;
        b = b/2;
    }
    return result;
}
void mult(ll A[2][2],ll B[2][2])
{
    ll C[2][2];
    C[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
    C[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
    C[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
    C[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];
    A[0][0] = C[0][0]%(m-1);
    A[0][1] = C[0][1]%(m-1);
    A[1][0] = C[1][0]%(m-1);
    A[1][1] = C[1][1]%(m-1);
}


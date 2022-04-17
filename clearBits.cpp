#include<bits/stdc++.h>
using namespace std;

int clearBits(int n,int i)
{
	int m = (1<<i)-1;

	return n & m;
}

int main()
{
  
  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	cin>>n;
  	int i;
  	cin>>i;
  	cout<<clearBits(n,i)<<endl;
  }

  return 0;

}
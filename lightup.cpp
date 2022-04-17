#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // write your code here
 long long n,x,y, num =0 ;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    s = s + '1';
    for (int i = 1; i < n + 1; i++)
	{
		if (s[i] == '1')
		{
			if (s[i - 1] == '0')
			{
				num++;
			}
		}
	}
	if (num == 0)
	{
		cout << "0";
		return 0;
	}
    
    
    long long ans = min(num * y, (num - 1) * x + y);
    
    cout<<ans;
    return 0;
}
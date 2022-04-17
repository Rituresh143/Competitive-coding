#include<bits/stdc++.h>
using namespace std;

void eulerPhi(int n){
	
	int phi[n+1];

	for(int i=1;i<=n;i++){
		phi[i]= i;

	}

	for(int i=2;i<=n;i++){
		if(phi[i] == i){
			phi[i] = i-1;
			for(int j=2*i;j<=n;j+=i){
				
				phi[j] = (phi[j]*(i-1))/i;
			}
		}
	}
	for(int i=1;i<=n;i++){

	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	

	eulerPhi(n);
}
	return 0;

}


// logic 2

int phi(int n)
    {
        int result = n;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                    n /= i;
                result -= result / i;
            }
        }
        if (n > 1)
            result -= result / n;

        return result;
    }
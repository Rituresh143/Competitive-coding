#include<bits/stdc++.h>
using namespace std;

int smallestNumber(int s,int d){

	int* arr = new int[d];
	for(int i=0;i<d;i++){
		arr[i] = 0;
	}

	int sum = s;
	// arr[0]=1;
	sum -=1;
	int i = d - 1;
	while(i>0){
		if( i== 0)
		{
			arr[i] += sum;
		}
		if(sum > 9)
		{
			arr[i] = 9;
			sum -= 9;
		}
		else
		{
			arr[i] += sum;
			sum=0;
		}
		i--;
	}
    
    arr[0]=sum+1;
	for(int i=0;i<d;i++)
	{
		cout<<arr[i];
	}

}

int main(){

	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;

		smallestNumber(s,d);
        
        cout<<endl;
	}


	return 0;
}
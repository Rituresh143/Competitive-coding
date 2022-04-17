#include<iostream>
using namespace std;

int factorial(int n){
	
	if(n==0){
		return 1;
	}

	int samllOutput = factorial(n-1);
	int output = n * samllOutput;
	return output;
}

int main()
{
   cout<< factorial(4)<<endl;
}
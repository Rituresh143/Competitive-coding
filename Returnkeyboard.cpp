#include<bits/stdc++.h>
using namespace std;

vector<string> key(int num,vector<string> &options)
{
	if(num<= 1){
		vector<string> output;
		output.push_back("");
		return output;
	}

	int lastDigit = num % 10;
	int smallNumber = num/10;
	vector<string> smalloutput;
	vector<string> output;

	smalloutput = key(smallNumber,options);
	string op = options[lastDigit];

	for(int i=0;i< op.length();i++){
		for(int j=0;j<int(smalloutput.size());j++)
		{
			output.push_back(smalloutput[j]+op[i]);
		}
	}

	return output;
}

vector<string> keypad(int num)
{
	vector<string> options = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	vector<string> output;
	output = key(num,options);
	return output;
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> output = keypad(n);
		for(int i=0;i<int(output.size());i++)
		{
			cout<< output[i] <<endl;
		}
	}
}
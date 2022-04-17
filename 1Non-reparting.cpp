#include<iostream>
#include<string>

using namespace std;

char onoRepeatingCharacter(string str){

	map<char,int> freq;
	for(int =0;i<str.length();i++){
		char currentChar = str[i];
		freq[currentChar]++;
	}

	for(int i=0;i<str.length();i++){
		if(freq[str[i]] == 1){
			return str[i];
		}
	}

	return str[0];
}
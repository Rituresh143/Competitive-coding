#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> removeDuplicates(vector<int> input){

	// set<int> s;
 //    vector<int> result;

 //    for(int i=0;i<input.size();i++){
 //    	if(s.find(input[i]) == s.end()){
 //    		s.insert(input);
 //    		result.push_back(input[i]);
 //    	}
 //    }

	// try with sortt
	vector<int>result;
	sort(input.begin(),input.end());

	result.push_back(input[0]);

	for(int i=1;i<input.size();i++){
		if(input[i] != input[i-1]){
			result.push_back(input[i]);
		}
	}

    return result;
}
#include<bits/stdc++.h>
using namespace std;

struct Item{
	int value,weight;
};

bool comp(struct Item a,struct Item b){

	double value1 = ((double)a.value)/(a.weight);
	double value2 = ((double)b.value)/(b.weight);

	return value1 > value2;
	
}

double fknapsach(struct Item arr[],int w,int n){

	sort(arr,arr+n,comp);

	int currw = 0;
	double fvalue = 0.0;
	for(int i=0;i<n;i++){
		if(currw + arr[i].weight<=w){
			currw += arr[i].weight;
			fvalue += arr[i].value;
			}else{
				int rweight = w - currw;
				fvalue += arr[i].value*((double)rweight/arr[i].weight);
			    break;
			}
		}
	return fvalue;
}

int main(){
    int n,w;
    cin>>n>>w;
	Item arr[n]; //{{60,20},{70,15},{80,40}};
	cout<<fknapsach(arr,w,n)<<endl;
	return 0;

}
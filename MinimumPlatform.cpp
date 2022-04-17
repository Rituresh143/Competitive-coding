#include<bits/stdc++.h>
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n) {
    // sort thr arrival and depature array
    sort(at,at+n);
    sort(dt,dt+n);

    int NoPlatform = 1,result=1;
    int i= 1,j=0;

    while(i<n && j<n){

    	if(at[i]<=dt[j]){
    		NoPlatform++;
    		i++;
    	}

    	else if (at[i] > dt[j]){
    		NoPlatform--;
    		j++;
    	}
        // update result if needed
    	if(NoPlatform > result)
    		result = NoPlatform;
    }

    return result;
}

int main(){

	// int t;
	// cin>>t;
	// while(t--){
		int n;
		cin>>n;
		int at[n];
		int dt[n];
		// cin>>at[n]>>dt[n];

		cout<<calculateMinPatforms(at,dt,n)<<endl;
	// }

	return 0;

}
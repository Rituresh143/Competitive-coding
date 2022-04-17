#include<bits/stdc++.h>
using namespace std;

int  maxLoot(int house[],int n)
{
    if(n==0)
        return 0;
        if(n==1)
            return house[0];
        if(n==2)
            return max(house[0],house[1]);;
        
        int max_val;
    	int prev1 = max(house[0], house[1]);
    	int prev2 = house[0];
        for(int i=2;i<n;i++){
            max_val = max(prev1, house[i] + prev2);
            prev2 = prev1;
            prev1 = max_val;
        }
        
    
    
    return max_val;
}


int main(){
    
    // write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
       
    }
     cout<<maxLoot(arr,n)<<endl;
    return 0;
}
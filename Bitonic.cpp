#include<bits/stdc++.h>
using namespace std;

int *lis_front(int *arr, int n){
    int *dp=new int[n];
    dp[0]=1;
    for(int i=1; i<n; i++){
        dp[i]=1;
        for(int j=i-1; j>=0; j--){
            if(arr[i]>arr[j])
               dp[i]=max(dp[i], dp[j]+1);
        }
    }
    return dp;
}

int *lis_back(int *arr, int n){
    int *dp=new int[n];
    dp[n-1]=1;
    for(int i=n-2; i>=0; i--){
        dp[i]=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j])
               dp[i]=max(dp[i], dp[j]+1);
        }
    }
    return dp;
}

int largestBiotonic(int *arr, int n){
    int *incLIS=lis_front(arr, n); //increasing lis
    int *decLIC=lis_back(arr, n); //decreasing lis
    
    int maxLenBiotonic=1;
    //find largest bS
    for(int i=0; i<n; i++){
        maxLenBiotonic=max(maxLenBiotonic, incLIS[i]+decLIC[i]-1);
    }
    return maxLenBiotonic;
}



int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *arr=new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        cout << largestBiotonic(arr, n) << endl;
    }
    return 0;
}
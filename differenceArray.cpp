#include<bits/stdc++.h>
using namespace std;

int mindiff(int arr[],int n){
   sort(arr,arr+n);
   // int diff = abs(arr[0]-arr[1]);
      int diff = INT_MAX;
   for(int i=n-1; i>=1;i--){
      if(abs(arr[i]-arr[i-1])< diff)
         diff = abs(arr[i]-arr[i-1]);
   }

   return diff;
}

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int*arr=new int[n];
  //take input in the array
       for(int i=0;i<n;i++){
           // cin>>arr[n];
           int a;
           cin>>a;
           arr[i]=a;
       }
      cout<<mindiff(arr,n)<<endl;

   }
}
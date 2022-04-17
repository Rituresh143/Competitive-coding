#include<bits/stdc++.h>
using namespace std;

int main(){

       int numbers[1000001];
       memset(numbers,0,sizeof(numbers));
       numbers[0]=1;
       
       for(int i=2;i<=100;i++){
              for(int j=i*i*i;j<=1000000;j+=i*i*i)
              {
                     numbers[j] = -1;
              }
       }
       int count = 1;
       for(int i=1;i<=1000000;i++)
       {
              if(numbers[i] != -1)
              {
                     numbers[i] = count;
                     count++;
              }
       }
       int t;
       cin>>t;
       for(int i=0;i<t;i++){
              int n;
              cin>>n;
              int ans = numbers[n];

              if(ans != -1)

              cout << numbers[n] <<endl;
       else
               cout<< "Not Cube Free" <<endl;

       }
}
#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *s)
{
    if(s[0]=='\0')
    {
        return;
    }
    if(s[0]==s[1])
    {
        int i=0;
        while(s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
        removeConsecutiveDuplicates(s);
    }
    removeConsecutiveDuplicates(s+1);
}

int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--){
        char s[10000];
        cin>>s;
        
      removeConsecutiveDuplicates(s);
      cout<<s<<endl;   
    }
}
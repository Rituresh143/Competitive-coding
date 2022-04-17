#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<bool>cnt(n+2,true);
	cnt[0]=false;
    cnt[1]=false;
	for(int i=2;i*i<=n;i++){
		if(cnt[i]){
               
               for(int j=i*i;j<=n;j++){
               	cnt[j]=false;
               }

		}

	}



	if(n<=1){
		cout<<1<<endl;
	}
	else{
		cout<<2<<endl;
	}

	int cp=0;int mincp=0;
	for(int i=2;i<=n+1;i++)
		if(cnt[i])
			cp++;
	
	else
		mincp++;


	cout<<min(cp,mincp)<<' '<<max(cp,mincp)<<endl;

	return 0;

}
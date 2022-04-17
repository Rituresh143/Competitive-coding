#include<bits/stdc++.h>
using namespace std;

long long int dis(int m,int n,int box[]){

	long long int p=0;
	if(m==0)
		return INT_MAX;
		for(int i=0;i<n;i++){
			if(box[i])
				p += box[i]/m;
		}

		return p;
	}

	int main(){

		int t;
		cin>>t;
		while(t--){

			int cho=-1;
			int ans = 0;
			int n,k;
			cin>>n>>k;
			int box[n];

			for(int i=0;i<n;i++){

				cin>>box[i];
				if(box[i]>cho)
					cho=box[i];
			}

			int low = 0,high=cho;
			while(low<=high){

				int mid = (low+high)/2;
				int p = min(dis(mid,n,box),k*1ll);
				if(p<k){

					high = mid - 1;

				}
				else if(p >= k)
				{
					low = mid + 1;
					if(mid > ans)
						ans = mid;
				}
			}

			cout<<ans<<endl;

		}

		return 0;
	}

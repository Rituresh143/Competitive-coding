#include<bits/stdc++.h>
using namespace std;

struct Job{
	int start,finish,profit;
};

bool compare(Job a,Job b){
	return a.finish < b.finish;
}

int findMProfit(Job arr[],int n){

	sort(arr,arr+n,compare);
	int* dp = new int[n];
	dp[0] = arr[0].profit;

	for(int i=1;i<n;i++){

		int including = arr[i].profit;
		int lUConflict = -1;

		for(int j=i-1;j>=0;j--){
			if(arr[j].finish<=arr[i].start){
				lUConflict = j;
				break;
			}
		}

		if(lUConflict != -1){
			including += dp[lUConflict];
		}
		dp[i] = max(including,dp[i-1]);

	}

	int ans = dp[n-1];
	delete[] dp;
	return ans;
}

int main()
{
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish>>arr[i].profit;
    }
    cout << findMProfit(arr, n);
    return 0;
}


// O(nlog(n)) approch
// best approch


#include<bits/stdc++.h>
using namespace std;

struct Job{
	int start,finish,profit;
};

bool compare(Job a,Job b){
	return a.finish < b.finish;
}

int binarySearch(Job jobs[], int index)
{
// Initialize 'lo' and 'hi' for Binary Search
    int lo = 0, hi = index - 1;
// Perform binary Search iteratively
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (jobs[mid].finish <= jobs[index].start)
        {
            if (jobs[mid + 1].finish <= jobs[index].start)
                lo = mid + 1;
            else
                return mid;
        }
        else
            hi = mid - 1;
    }
    return -1;
}

int findMProfit(Job arr[],int n){

	sort(arr,arr+n,compare);
	int* dp = new int[n];
	dp[0] = arr[0].profit;

	for(int i=1;i<n;i++){

		int including = arr[i].profit;
		
        int lUConflict = binarySearch(arr,i);
		if(lUConflict != -1){
			including += dp[lUConflict];
		}
		dp[i] = max(including,dp[i-1]);

	}

	int ans = dp[n-1];
	delete[] dp;
	return ans;
}

int main()
{
    int n;
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish>>arr[i].profit;
    }
    cout << findMProfit(arr, n);
    return 0;
}
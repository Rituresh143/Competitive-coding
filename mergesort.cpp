#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int start,int mid,int end)
{
    int i=start;
    int j=mid;
    int k=0;
    int temp[end-start+1];
    while(i<mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while(i<mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=end)
    {
        temp[k++]=arr[j++];
    }
    for(int i=start,k=0;i<=end;i++,k++)
    {
        arr[i]=temp[k];
    }
}
void merge_sort(int *arr,int start,int end)
{
    if(start>=end)
        return;
        int mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,mid+1,end);
}
int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int* arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        merge_sort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
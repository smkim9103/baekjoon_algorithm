#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<=k)
        {
            cnt+=k/arr[i];
            k%=arr[i];
        }
        if(k==0)
        {
            break;
        }
    }
    cout<<cnt;
}
#include <iostream>
#include<cstdio>
#include<algorithm>
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
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            arr[i]+=k;
            cnt++;
        }
        if(arr[i]<=arr[i-1])
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<cnt;
}
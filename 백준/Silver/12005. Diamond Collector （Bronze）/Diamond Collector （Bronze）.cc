#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int maxcnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int a=0;
    for(int i=0;i<n;i++)
    {
        while(arr[i]-arr[a]>k)
            {
                a+=1;
            }
        maxcnt=max(maxcnt,i-a+1);
    }
    cout<<maxcnt;
    return 0;
}
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    /*
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a%10==0)
        {
            cout<<"E\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
    return 0;
    */

    long long n,k;
    cin>>n>>k;
    long long arr[n];
    long long cost=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cost+=k+1;
        }
        else
        {
            cost+=min(arr[i]-arr[i-1],k+1);
        }
    }
    cout<<cost;
}
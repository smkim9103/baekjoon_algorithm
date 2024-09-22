#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int maxnum=-10000000;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>=k-1)
        {
            int sum=0;
            for(int j=0;j<k;j++)
                {
                    sum+=arr[i-j];
                }
            maxnum=(maxnum>sum)?maxnum:sum;
            
        }
    }
    cout<<maxnum;
}
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int max=0;

    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n-1;j++)
                {
                    for(int k=j+1;k<n;k++)
                        {
                            if(max<arr[i]+arr[j]+arr[k] && arr[i]+arr[j]+arr[k]<=m)
                                max=arr[i]+arr[j]+arr[k];
                        }
                }
        }
    cout<<max;
}
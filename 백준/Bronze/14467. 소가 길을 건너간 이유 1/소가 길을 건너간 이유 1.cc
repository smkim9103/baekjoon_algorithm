#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int arr[11];
    fill(arr,arr+11,-1);
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(arr[a]==-1)
        {
            arr[a]=b;
        }
        else if(arr[a]!=b)
        {
            arr[a]=b;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
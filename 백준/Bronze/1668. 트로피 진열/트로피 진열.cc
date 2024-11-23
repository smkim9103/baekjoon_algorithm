#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    int cnt=0;
    cin>>n;
    int arr[50];
    int a=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(a<arr[i])
        {
            a=arr[i];
            cnt++;
        }
    }
    cout<<cnt<<"\n";
   
    a=0;
    cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a<arr[i])
        {
            a=arr[i];
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
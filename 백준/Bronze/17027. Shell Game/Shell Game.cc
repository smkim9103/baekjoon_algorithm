#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n,a,b,g;
    int arr[3]={0};
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>g;
        x=arr[a-1];
        arr[a-1]=arr[b-1];
        arr[b-1]=x;
        
        arr[g-1]++;
    }
    sort(arr,arr+3);
    cout<<arr[2];
}
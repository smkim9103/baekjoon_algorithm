#include<cstdio>
#include<cmath>
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    
    if(arr[1]-arr[0]==1 && arr[2]-arr[1]==1)
    {
        cout<<"0"<<"\n";
    }
    else if(arr[1]-arr[0]==2 || arr[2]-arr[1]==2)
    {
        cout<<"1"<<"\n";
    }
    else if(arr[1]-arr[0]==1 || arr[2]-arr[1]==1)
    {
        cout<<"2"<<"\n";
    }
    else
    {
        cout<<"2"<<"\n";
    }
    if(arr[1]-arr[0]==1 && arr[2]-arr[1]==1)
    {
        cout<<"0";
    }
    else if(arr[1]-arr[0] >= arr[2]-arr[1])
    {
        cout<<arr[1]-arr[0]-1;
    }
    else
    {
        cout<<arr[2]-arr[1]-1;
    }
}
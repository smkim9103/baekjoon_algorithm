#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10];
    int total=0;
    for(int i=0;i<9;i++)
    {
        cin>>arr[i];
        total=total+arr[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(arr[i]+arr[j] == total-100)
            {
                arr[i]=0;
                arr[j]=0;
                break;
            }
        }
        if(arr[i]==0)
        {
            break;
        }
    }
    sort(arr,arr+9);
    for(int i=2;i<9;i++)
        {
            cout<<arr[i]<<endl;
        }
}
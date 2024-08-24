#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int arr[10];
    int sum=0;

    for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }

    int in=0;
    while(sum<=100)
        {
            sum+=arr[in];
            in++;
        }
    if(sum-100<=100-(sum-arr[in-1]))
    {
        cout<<sum;
    }
    else if(sum-100>100-(sum-arr[in-1]))
        {
            cout<<sum-arr[in-1];
        }
}
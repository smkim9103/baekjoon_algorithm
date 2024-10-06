#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int arr[101]={0};
    int cnt=0;

    for(int i=a+1;i<=b;i++)
    {
        arr[i]=1;
    }
    for(int i=c+1;i<=d;i++)
    {
        arr[i]=1;
    }
    for(int i=0;i<=100;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
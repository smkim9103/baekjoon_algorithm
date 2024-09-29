#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100]={0};
    int b;
    int temp;
    for(int i=0;i<n;i++)
        {
            a[i]=i+1;
            cin>>b;
            for(int j=0;j<b;j++)
                {
                    temp=a[i-j];
                    a[i-j]=a[i-1-j];
                    a[i-1-j]=temp;
                }
        }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
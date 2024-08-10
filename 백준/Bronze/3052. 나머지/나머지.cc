#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a[10]={};
    int cnt=0;
    for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    int b[10]={};
    int c[41]={0};
    for(int i=0;i<10;i++)
        {
            b[i]=a[i]%42;
            c[b[i]]=1;
        }
    for(int i=0;i<42;i++)
        {
            if(c[i]==1)
            {
                cnt++;
            }
        }
    cout<<cnt;
}
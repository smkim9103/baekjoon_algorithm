#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[10]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n>0)
    {
        arr[n%10]++;
        n=n/10;
    }
    for(int i=9;i>=0;i--)
    {
        for(int j=0;j<arr[i];j++)
        {
            cout<<i;
        }
    }
}
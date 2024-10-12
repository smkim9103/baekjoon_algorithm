#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[10001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        arr[k]++;
    }
    for(int i=1;i<10001;i++)
    {
        for(int j=1;j<=arr[i];j++)
        {
            cout<<i<<"\n";
        }
    }
}

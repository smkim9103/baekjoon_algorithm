#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int arrr[n][m];
    int arrrr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arrr[i][j];
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arrrr[i][j]=arr[i][j]+arrr[i][j];
                cout<<arrrr[i][j]<<" ";
            }
            cout<<endl;
        }
}
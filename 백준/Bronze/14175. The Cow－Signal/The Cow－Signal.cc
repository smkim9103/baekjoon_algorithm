#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

char arr[1000][1000];
int main()
{
    int n,m,k;
    cin>>m>>n>>k;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int p=0;p<n;p++)
            {
                for(int q=0;q<k;q++)
                {
                    cout<<arr[i][p];
                }
            }
            cout<<"\n";
        }
    }
}
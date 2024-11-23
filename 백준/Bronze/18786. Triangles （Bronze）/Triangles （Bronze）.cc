#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    int arr[n][2];
    int res=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i][0]==arr[j][0] && arr[j][1]==arr[k][1])
                {
                    res=max(res,abs((arr[i][1]-arr[j][1]) * (arr[j][0]-arr[k][0])));
                }
                if(arr[i][0]==arr[k][0] && arr[k][1]==arr[j][1])
                {
                    res=max(res,abs((arr[i][1]-arr[k][1]) * (arr[k][0]-arr[j][0])));
                }
                if(arr[j][0]==arr[i][0] && arr[i][1]==arr[k][1])
                {
                    res=max(res,abs((arr[j][1]-arr[i][1]) * (arr[i][0]-arr[k][0])));
                }
                if(arr[j][0]==arr[k][0] && arr[k][1]==arr[i][1])
                {
                    res=max(res,abs((arr[j][1]-arr[k][1]) * (arr[k][0]-arr[i][0])));
                }
                if(arr[k][0]==arr[i][0] && arr[i][1]==arr[j][1])
                {
                    res=max(res,abs((arr[k][1]-arr[i][1]) * (arr[i][0]-arr[j][0])));
                }
                if(arr[k][0]==arr[j][0] && arr[j][1]==arr[i][1])
                {
                    res=max(res,abs((arr[k][1]-arr[j][1]) * (arr[j][0]-arr[i][0])));
                }
            }
        }
    }
    cout<<res;
}
#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int max=0;
    int maxi=1,maxj=1;
    int arr[9][9];

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    cout<<max<<endl<<maxi+1<<" "<<maxj+1;
}
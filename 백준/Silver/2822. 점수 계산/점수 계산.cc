#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int score[8];
    int a[8];
    int total=0;
    int arr[5];

    for(int i=0;i<8;i++)
    {
        cin>>score[i];
        a[i]=score[i];
    }

    sort(score,score+8,greater<int>());

    for(int i=0;i<5;i++)
    {
        total+=score[i];
    }
    int p=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[j]==score[i])
            {
                arr[p]=j+1;
                p++;
            }
        }
    }

    cout<<total<<"\n";
    sort(arr,arr+5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arrival[100];
    int inspection[100];

    for(int i=0;i<n;i++)
    {
        cin>>arrival[i]>>inspection[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arrival[j]>arrival[j+1])
            {
                int temp=arrival[j];
                arrival[j]=arrival[j+1];
                arrival[j+1]=temp;
                temp=inspection[j];
                inspection[j]=inspection[j+1];
                inspection[j+1]=temp;
            }
        }
    }
    int time=0;
    for(int i=0;i<n;i++)
    {
        if(arrival[i]>time)
        {
            time=arrival[i];
        }
        time+=inspection[i];
    }
    cout<<time;
    return 0;
}
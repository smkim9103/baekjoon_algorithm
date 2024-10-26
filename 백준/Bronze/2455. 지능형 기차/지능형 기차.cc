#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int max=0, off, on;
    int total=0;
    
    for(int i=0;i<4;i++)
    {
        cin>>off>>on;
        
        total=total-off+on;
        
        if(total>max)
        {
            max=total;
        }
    }
    
    cout<<max;
}
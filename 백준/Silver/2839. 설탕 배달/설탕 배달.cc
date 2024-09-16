#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int min=1000000;
    
    cin>>n;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                {
                    if(3*i+5*j==n && 3*i+5*j<min)
                    {
                        min=i+j;
                    }
                }
        }
    if(min==1000000)
    {
        cout<<"-1";
        return 0;
    }
    cout<<min;
}

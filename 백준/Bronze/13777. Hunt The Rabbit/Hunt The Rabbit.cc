#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    
    while(1)
    {
        
        int a;
        cin>>a;
        
        if(a==0)
        {
            break;
        }
        
        int low=1;
        int high=50;

        while(1)
            {

                int mid=(low+high)/2;
                if(mid==a)
                {
                    cout<<mid<<" ";
                    break;
                }
                else if(mid<a)
                {
                    cout<<mid<<" ";
                    low=mid+1;
                }
                else
                    {
                        cout<<mid<<" ";
                        high=mid-1;
                    }
            }
        cout<<"\n";
        
    }
}
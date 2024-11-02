#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int min=99;
        int max=0;
        
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            if(a>max)
            {
                max=a;
            }
            if(a<min)
            {
                min=a;
            }
        }
        cout<<(max-min)*2<<"\n";
    }
    
    return 0;
}
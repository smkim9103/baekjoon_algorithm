#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int max=-1000000;
    int min=1000000;

    cin>>n;
    int a;

    for(int i=0;i<n;i++)
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
    cout<<min<<" "<<max;
}
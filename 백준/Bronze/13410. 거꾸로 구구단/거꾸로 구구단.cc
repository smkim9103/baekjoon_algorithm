#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    int max=0;
    cin>>a>>b;

    for(int i=1;i<=b;i++)
        {
            int c=a*i;
            int d=0;
            while(c)
                {
                    d=d*10+c%10;
                    c/=10;
                }
            if(d>max)
                {
                    max=d;
                }
        }
    cout<<max;
}
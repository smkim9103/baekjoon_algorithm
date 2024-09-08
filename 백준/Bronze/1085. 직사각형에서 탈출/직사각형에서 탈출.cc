#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,w,h;
    int min=1000000000;
    cin>>x>>y>>w>>h;

    if(x-0<min)
    {
        min=x-0;
    }
    if(y-0<min)
        {
            min=y-0;
        }
    if(w-x<min)
        {
            min=w-x;
        }
    if(h-y<min)
        {
            min=h-y;
        }
    cout<<min;
}
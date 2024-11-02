#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    if(n%7==0 || n%7==2)
    {
        cout<<"CY";
    }
    else
    {
        cout<<"SK";
    }
    return 0;
}
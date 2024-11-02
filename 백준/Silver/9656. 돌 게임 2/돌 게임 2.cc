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
    
    if(n%2==0)
    {
        cout<<"SK";
    }
    else if(n%2!=0)
    {
        cout<<"CY";
    }
    return 0;
}
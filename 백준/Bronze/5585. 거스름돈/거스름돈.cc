#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=1000-n;
    int cnt=0;

    cnt=cnt+total/500;
    total=total%500;

    cnt=cnt+total/100;
    total=total%100;

    cnt=cnt+total/50;
    total=total%50;

    cnt=cnt+total/10;
    total=total%10;
    
    cnt=cnt+total/5;
    total=total%5;
    
    cnt=cnt+total;

    cout<<cnt<<endl;
    
}
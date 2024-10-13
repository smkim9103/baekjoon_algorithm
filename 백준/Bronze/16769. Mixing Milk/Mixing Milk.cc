#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int m[3],c[3];
    for(int i=0;i<3;i++)
    {
        cin>>m[i]>>c[i];
    }
    for(int i=0;i<100;i++)
    {
        int start=i%3;
        int end=(i+1)%3;
        int milk=min(c[start],m[end]-c[end]);
        c[start]-=milk;
        c[end]+=milk;
    }
    cout<<c[0]<<"\n"<<c[1]<<"\n"<<c[2];
}
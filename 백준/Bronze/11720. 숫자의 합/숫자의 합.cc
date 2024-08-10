#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    string b;
    int sum=0;
    cin>>a;
    cin>>b;

    for(int i=0;i<=b.size()-1;i++)
        {
            sum=sum+(b[i]-'0');
        }
    cout<<sum;
}
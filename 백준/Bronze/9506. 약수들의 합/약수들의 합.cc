#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    int sum=0,num;
    while(true)
    {
        cin>>a;
        if(a==-1)
        {
            break;
        }
        for(int i=1;i<a;i++)
            {
                if(a%i==0)
                {
                    sum=sum+i;
                    num=i;
                }
            }
        if(sum==a)
        {
            cout<<a<<" = ";
            for(int i=1;i<num;i++)
                {
                    if(a%i==0)
                    {
                        cout<<i<<" + ";
                    }
                }
            cout<<num << endl;
        }
        else
        {
            cout<<a<<" is NOT perfect."<<endl;
        }
        sum=0;
      
    }
}
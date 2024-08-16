#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int cnt=1;
    int a;
    cin>>a;

    for(int i=1;i<a;i++)
        {
            for(int j=1;j<=a-cnt;j++)
                {
                    cout<<" ";
                }
            for(int j=1;j<cnt*2;j++)
                {
                    cout<<"*";
                }
            cnt++;
            cout<<endl;
        }
    for(int i=a;i>=1;i--)
        {
            for(int j=a-cnt;j>=1;j--)
                {
                    cout<<" ";
                }
            for(int j=cnt*2;j>1;j--)
                {
                    cout<<"*";
                }
            cnt--;
            cout<<endl;
        }
}
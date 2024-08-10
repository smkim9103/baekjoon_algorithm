#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    string c;
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        cin>>b>>c;           
        for(int k=0;k<=c.size()-1;k++)
        {
            for(int j=1;j<=b;j++)
                cout<<c[k];
        }
        cout<<endl;
    }
}
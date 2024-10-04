#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    
    for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            for(int i=1;;i++)
                {
                    if(i%a==0 && i%b==0)
                    {
                        cout<<i<<" ";
                        break;
                    }
                }
            for(int i=a*b;;i--)
                {
                    if(a%i==0 && b%i==0)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
        }
}
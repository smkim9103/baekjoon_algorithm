#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n;i>=1;i--)
        {
            bool flag=true;
            int a=i;
            while(a)
            {
                int c=a%10;
                if((c!=4)&&(c!=7))
                {
                    flag=false;
                    break;
                }
                a/=10;
            } 
            if(flag==true)
                {
                    cout<<i;
                    break;
                }
        }
}
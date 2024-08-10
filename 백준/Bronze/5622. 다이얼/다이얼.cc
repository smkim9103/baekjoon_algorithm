#include <iostream>
#include<cstdio>
using namespace std;
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int total=0;

    for(int i=0;i<a.size();i++)
        {
            if(a[i]>=65 && a[i]<=67)
            {
                total=total+3;
            }
            else if(a[i]>=68 && a[i]<=70)
            {
                total=total+4;
            }
            else if(a[i]>=71 && a[i]<=73)
                {
                    total=total+5;
                }
            else if(a[i]>=74 && a[i]<=76)
                {
                    total=total+6;
                }
            else if(a[i]>=77 && a[i]<=79)
                {
                    total=total+7;
                }
            else if(a[i]>=80 && a[i]<=83)
                {
                    total=total+8;
                }
            else if(a[i]>=84 && a[i]<=86)
                {
                    total=total+9;
                }
            else if(a[i]>=87 && a[i]<=90)
                {
                    total=total+10;
                }
            
        }
    cout<<total;
}
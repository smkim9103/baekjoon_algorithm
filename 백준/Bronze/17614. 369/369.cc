#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        while(num>0)
        {
            if(num%10==3 || num%10==6 || num%10==9)
            {
                cnt++;
            }
            num=num/10;
        }
    }
    cout<<cnt<<endl;
}
#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    int s=666;
    string l;
    
    while(1)
    {
        l=to_string(s);
        for(int i=0;i<l.length()-2;i++)
        {
            if(l[i]=='6'&&l[i+1]=='6'&&l[i+2]=='6')
            {
                cnt++;
                if(cnt==n)
                {
                    cout<<s;
                    return 0;
                }
                break;
            }
        }
        s++;
    }
}
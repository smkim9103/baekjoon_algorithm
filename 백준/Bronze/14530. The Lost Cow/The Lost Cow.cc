#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    
    int cnt=0;
    int location=x;
    
    int a=1;
    bool flag=true;
    
    while(true)
    {
        if(flag)
        {
            for(int i = location; i < x + a; i++)
            {
                location ++;cnt ++;
                if(location == y)
                {
                    cout << cnt ;
                    return 0;
                }
            }
        }
        else
        {
            for(int i=location;i>x-a;i--)
            {
                location--;
                cnt++;
                if(location==y)
                {
                    cout<<cnt;
                    return 0;
                }
            }
        }
        flag=!flag;
        a*=2;
    }
}
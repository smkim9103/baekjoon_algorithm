#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    int cnt=1;

    if(s.length()==1 && s[0]==' ')
    {
        cout<<"0";
        return 0;
    }
    
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]==' ')
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
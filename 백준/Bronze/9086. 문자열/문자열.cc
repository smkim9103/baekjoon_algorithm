#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    string s;

    cin>>a;
    
    for(int i=1;i<=a;i++)
        {
            cin>>s;
            cout<<s[0]<<s[s.size()-1]<<endl;
        }
}
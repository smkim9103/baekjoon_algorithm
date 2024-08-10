#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;

    while(true)
        {
            getline(cin,a);
            if(a=="")
            {
                return 0;
            }
            cout<<a<<endl;
        }
}
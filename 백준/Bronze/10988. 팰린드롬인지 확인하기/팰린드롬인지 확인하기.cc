#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin>>a;
    bool palindrome = true;

    for(int i=0;i<=a.size()/2;i++)
        {
            if(a[i]!=a[a.size()-1-i])
            {
                palindrome = false;
            }
        }
    if(palindrome == true)
    {
        cout<<"1";
    }
    else
        cout<<"0";
}
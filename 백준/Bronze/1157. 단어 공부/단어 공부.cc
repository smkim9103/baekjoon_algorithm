#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int max=0, check=0;
    char q='?';

    int alp[26]={0};

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-'a'+'A';
        }
        alp[s[i]-'A']++;
    }
    for(int i=0;i<26;i++)
        {
            if(alp[i]>max)
            {
                max=alp[i];
                q='A'+i;
                check=0;
            }
            else if(alp[i]==max)
            {
                check=1;
            }
        }
    if(check)
    {
        cout<<"?"<<endl;
    }
    else
    {
        cout<<q<<endl;
    }
}
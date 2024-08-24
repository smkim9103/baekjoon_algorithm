#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T,C;
    cin>>T;

    for (int i=0;i<T;i++)
    {
        int q,d,n,p;
        
        cin>>C;

        q=C/25;
        C=C%25;

        d=C/10;
        C=C%10;

        n=C/5;
        C=C%5;

        p=C;

        cout<<q<<" "<<d<<" "<<n<<" "<<p<<endl;
    }

}
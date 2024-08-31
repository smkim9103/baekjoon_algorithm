#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    cin>>N;

    for(int i=1;i<N;i++)
    {
        int sum=i;
        int num=i;
        
        while(num!=0)
        {
            sum+=num%10;
            num=num/10;
        }
        if(sum==N)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"0"<<endl;
}
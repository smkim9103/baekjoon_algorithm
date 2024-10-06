#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n,m,b;
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
    cin>>m;
    sort(A,A+n);

    for(int i=0;i<m;i++)
    {
        bool a=false;
        int left=0;
        int right=n-1;
        cin>>b;

        while(left<=right)
        {
            int mid=(left+right)/2;
            if(A[mid]==b)
            {
                a=true;
                break;
            }
            else if(A[mid]>b)
            {
                right=mid-1;;
            }
            else if(A[mid]<b)
            {
                left=mid+1;
            }
        }
        
        if(a==true)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }
}
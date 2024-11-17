#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;


int main()
{
    int n, m, low, high, mid;
    cin >> n;
    int cardn[n];

    for(int i = 0; i <n; i++)
    {
        cin >> cardn[i];
    }
    sort(cardn, cardn + n);

    cin >> m;
    int cardm[m];
    int count[m]={0};
    for(int i = 0; i < m; i++)
    {
        cin >> cardm[i];
    }
for (int i = 0; i < m; i ++)
    {
        low = 0;
        high = n - 1;
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(cardm[i] == cardn[mid])
            {
                count[i] ++;
                break;
            }
            if (cardm[i] >= cardn[mid])
            {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    for(int i = 0; i < m ; i ++)
{
    cout << count[i]<<" ";
    }
}
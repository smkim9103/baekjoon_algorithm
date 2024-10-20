#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int limits[101];
    int limitt[101];

    int a = 1;
    int maxx = 0;

    for (int i = 0; i < n; i++)
    {
        int length, speed;

        cin >> length >> speed;

        for (int j = a; j < a + length; j++)
            limits[j] = speed;
            a += length;
    }
    a = 1;
    for (int i = 0; i < m; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j = a; j < a + length; j++)
            limitt[j] = speed;
            a += length;
    }


    for (int i = 1; i <= 100; i++) {
        maxx = max(limitt[i] - limits[i], maxx);
    }

    cout << maxx << '\n';

    return 0;
}
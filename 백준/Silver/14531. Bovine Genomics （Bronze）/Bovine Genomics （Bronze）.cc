#include <iostream>
using namespace std;
int main()
{
    int n, m ;
    cin >> n >> m;
    int cnt = 0;
    char spotty [n][m] ={};
    char plain [n][m] = {};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> spotty[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> plain[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        int spottydna[n] = {};
        int plaindna[n] = {};
        for(int j = 0; j < n; j ++)
        {
            spottydna[j] = spotty[j][i] - 65;
            plaindna [j] = plain[j][i] - 65;
        }

        bool check = false;
        for (int j = 0; j < n; j++)
        {  
            for (int k = 0; k < n ; k++)
            {
                if(spottydna[j] == plaindna[k])
                {
                    check = true;
                    break;
                }
            }
        }
        if(check == false)
        {
            cnt ++;
        }
    }
    cout << cnt;
}
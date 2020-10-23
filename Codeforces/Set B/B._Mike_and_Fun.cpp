#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;

    bool bear[1000][505];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> bear[i][j];

    int cnt = 0;


        int i, j;
        cin >> i >> j;

        bear[i][j] = !bear[i][j];

        int arr[505], a=0;
        for(int i; i<=n; i++){
            for(int p=1; p<=m; p++){
                if(bear[i][p])cnt++;
            }
            arr[a] = cnt;
            a++;
        }


        cout << arr[a] << endl;
        cnt = 0;


    return 0;
}

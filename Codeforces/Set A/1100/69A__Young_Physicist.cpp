#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[101][4], result[4];
    cin >> n;

    for(int i=1; i<=n; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for(int i=1; i<=3; i++) {
        for (int j = 1; j <= n; j++) {
            sum = sum + arr[j][i];
        }
        result[i] = sum;
        sum = 0;
    }

    int cnt=0;

    for(int i=1; i<=3; i++) {
        if(result[i] != 0)
            cnt++;
    }

    if(cnt == 0)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
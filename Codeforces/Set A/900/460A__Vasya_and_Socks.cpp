#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if(n < m)
        cout << n << endl;
    else if(n == m)
        cout << n+1 << endl;

    else {
        int ans = n;
        int temp1=n, k;
        while(true) {
            k = temp1/m;
            if(k == 0)
                break;
            temp1 = k+(temp1 % m);
            ans += k;
        }
        cout << ans << endl;
    }
    return 0;
}
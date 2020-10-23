#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, vec[105];
    cin >> n >> a;

    for(int i=1; i<=n; i++)
        cin >> vec[i];

    int ans=0;

    if(vec[a] == 1)
        ans = ans+1;

    for(int i=1; i<=n; i++) {
        if((a-i) >= 1 && (a+i) <= n) {
            if(vec[a-i] == 1 && vec[a+i] == 1)
                ans = ans + 2;
        }
        else if((a-i) <= 0 && (a+i) <= n) {
            if(vec[a+i] == 1)
                ans = ans + 1;
        }
        else if((a-i) >= 1 && (a+i) > n) {
            if(vec[a-i] == 1)
                ans = ans + 1;
        }
    }

    cout << ans << endl;
    return 0;
}

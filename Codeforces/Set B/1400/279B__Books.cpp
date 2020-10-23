#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n+2];

    for(int i=1; i<=n; i++)
        cin >> arr[i];

    int sum=0, ans = 0, j=1;

    for(int i=1; i<=n; i++) {
        if(sum + arr[i] <= t) {
            sum += arr[i];
        }
        else {
            sum += arr[i];
            while (sum > t) {
                sum -= arr[j];
                j++;
            }
        }
        ans = max(ans, i-j+1);
    }
    cout << ans << endl;
    return 0;
}
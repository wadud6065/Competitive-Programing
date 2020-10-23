#include <bits/stdc++.h>
using namespace std;
int arr[33];

int main()
{
    int test, n;
    cin >> test;
    arr[1] = 2;
    for(int i=2; i<=30; i++)
        arr[i] = arr[i-1]*2;

    while (test--) {
        cin >> n;
        int a = arr[n], b = 0;
        for(int i=1; i<n/2; i++)
            a += arr[i];

        for(int i=n/2; i<n; i++)
            b += arr[i];

        cout << abs(a-b) << endl;
    }

    return 0;
}
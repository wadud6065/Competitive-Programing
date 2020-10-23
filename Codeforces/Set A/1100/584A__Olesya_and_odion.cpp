#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, arr[1000];
    cin >> n >> t;
    if(n == 1 && t < 10){
        cout << t << endl;
        return 0;
    }
    else if (n > 1 && t <= 10) {
        for(int i = 1; i<=n; i++) {
            if (t < 10)
                arr[i] = t;
            else if (t == 10) {
                arr[i] = 0;
                arr[1] = 1;
            }
        }
        for(int i = 1; i<=n; i++)
            cout << arr[i];
        cout << "\n";
    }
    else
        cout << "-1" << endl;
}
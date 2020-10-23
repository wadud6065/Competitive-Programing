#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    if(n % 2 == 0) {
        if(n/2 >= k)
            cout << (k*2)-1 << endl;
        else if(n/2 < k)
            cout << (k-(n/2))*2 << endl;
    }

    else if(n % 2 != 0) {
        long long int temp = (n/2)+1;
        if(temp >= k)
            cout << (k*2)-1 << endl;
        else if(temp < k)
            cout << (k-temp)*2 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long int a, b, x, y, z;

long long int gcdextended(long long int a, long long b) {
    if(a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long int gcd = gcdextended(b%a, a);
    z = y;
    y = x;
    x = z - (b/a)*x;
    return gcd;
}

int main()
{
    while (scanf("%lld %lld", &a, &b) == 2) {
        long long int gcd = gcdextended(a, b);
        if(x < y)
            cout << x << " " << y << " " << gcd << endl;
        else
            cout << y << " " << x << " " << gcd << endl;
    }
}

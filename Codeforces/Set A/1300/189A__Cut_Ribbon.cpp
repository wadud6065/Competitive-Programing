#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, vec[3];
    cin >> n >> vec[0] >> vec[1] >> vec[2];
    sort(vec, vec+3);
    a = vec[0], b = vec[1], c = vec[2];
    int p = 0;
    int i = n/a;
    int x, y, z;

    for(x = i; x >= 0; x--)
        for(y = 0; y <= i; y++) {
            z = (n - (x*a + y*b))/c;
            if(z < 0)
                continue;
            if (x * a + y * b + z * c == n)
                p = max(p, x + y + z);
        }
    cout << p << endl;
}

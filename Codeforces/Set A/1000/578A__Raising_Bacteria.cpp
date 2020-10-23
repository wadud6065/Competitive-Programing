#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    int j = n;
    int result = log2(n);

    int k = round(pow(2.0, result));

    cout << 1 + (j-k) << endl;
    return 0;
}
// 536870911
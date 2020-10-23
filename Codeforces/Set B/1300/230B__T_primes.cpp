#include <bits/stdc++.h>
#define limit 1000000
using namespace std;

long long int prime[limit];

void seive()
{
    prime[0] = 1;
    prime[1] = 1;
    for(long long int i=2; i<limit; i++) {
        if (prime[i] == 0) {
            for (long long int j = i * i; j < limit; j = j + i) {
                prime[j] = 1;
            }
        }
    }
}

int pure_sqrt (long long int number)
{
    long long int z = sqrt(number);
    if(z*z == number)
        return 1;
    else
        return 0;
}

int main()
{
    long long int n;
    cin >> n;

    seive();

    for(long long int i = 0; i < n; i++) {

        long long int x;
        cin >> x;

        if(x == 4)
            cout << "YES" << endl;

        else if (x % 2 == 0)
            cout << "NO" << endl;

        else if (pure_sqrt(x) == 1 && prime[int(sqrt(x))] == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

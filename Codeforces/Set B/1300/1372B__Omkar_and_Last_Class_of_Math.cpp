#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld\n", a)
#define ln printf("\n")
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626
#define pb push_back

int main()
{
    lld n, test;
    getI(test);

    while (test--) {
        getI(n);

        if(n % 2 == 0)
            cout << n/2 << " " << n/2 << endl;

        else {
            bool temp = false;
            for (lld i = 2; i*i <= n; i++)
                if(n % i == 0) {
                    printf("%lld %lld\n", n/i, n-(n/i));
                    temp = true;
                    break;
                }

            if(!temp)
                cout << "1" << " " << n-1 << endl;    
        }
    }

    return 0;
}
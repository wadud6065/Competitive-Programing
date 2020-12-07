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
    lld n, result(0);
    getI(n);

    bool arr[3001] = {false};
    lld counter[3001];
    memset(counter, 0, sizeof(counter));

    for (lld i = 2; i <= n; i++)
        if(!arr[i]) {
            for (lld j = i+i; j <= n; j += i) {
                counter[j]++;
                arr[j] = true;
            }          
        }

    for (lld i = 2; i <= n; i++)
        if(counter[i] == 2)
            result++;
    
    pt(result);

    return 0;
}
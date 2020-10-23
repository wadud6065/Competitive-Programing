#include <bits/stdc++.h>
using namespace std;

int main() {
    int Test;
    scanf("%d", &Test);
    for(int j=0; j<Test; j++) {
        long long int n, m, temp;
        scanf("%lld %lld", &n, &m);
        temp = (n/2)*m;
        printf("Case %d: %lld\n", j+1, temp);
    }
    return 0;
}
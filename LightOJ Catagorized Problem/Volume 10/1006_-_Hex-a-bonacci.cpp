#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int arr[100005];
int fn( int n ) {
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	arr[5] = f;

	for(int i=6; i<=n; i++)
		arr[i] = arr[i-1]%10000007 + arr[i-2]%10000007 + arr[i-3]%10000007
				+ arr[i-4]%10000007 + arr[i-5]%10000007 + arr[i-6]%10000007;

    return arr[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}

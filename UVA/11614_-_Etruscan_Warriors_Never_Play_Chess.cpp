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
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	lld test;
	getI(test);
	for(int i=0; i<test; i++) {
		lld temp;
		getI(temp);
		lld a, b, c, result1, result2;
		a = 1, b = 1, c = -(2*temp);
		result1 = ((-b)+sqrt((b*b) - (4*a*c)))/(2*a);
		result2 = ((-b)-sqrt((b*b) - (4*a*c)))/(2*a);
		pt(max(result1, result2));
	}
	return 0;
}

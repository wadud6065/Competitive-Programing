#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld", &a)
#define getII(a,b) scanf("%lld %lld", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld", &a, &b, &c)
#define pt(a) printf("%lld\n", a)
#define ln printf("\n")
#define F(i,L,R) for (lld i = L; i < R; i++)
#define FE(i,L,R) for (lld i = L; i <= R; i++)
#define FR(i,L,R) for (lld i = L; i > R; i--)
#define FRE(i,L,R) for (lld i = L; i >= R; i--)
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626
#define pb push_back

int main()
{
	lld test;
	getI(test);
	FE(i, 1, test) {
		lld n, cnt = 0;
		vector <lld> vec;
		getI(n);
		while(n > 0) {
			vec.pb(n % 2);
			n = n/2;
		}
		vec.pb(0);
		reverse(ALL(vec));
		next_permutation(ALL(vec));

		lld ans = 0, base = vec.size()-1;
		F(j, 0, vec.size()) {
			ans += vec[j]*round(pow(2,base));
			base--;
		}
		printf("Case %lld: %lld\n", i, ans);
	}
	return 0;
}

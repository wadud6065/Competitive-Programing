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

lld bigMod(lld a, lld b, lld p) {
	if(b == 0)
		return 1%p;

	lld s = bigMod(a, b/2, p);
	s = s*s;
	s = s % p;

	if(b%2 == 1)
		s = s * a;

	return s%p;
}

int main()
{
	lld B, P, M;
	while(cin >> B >> P >> M) {
		lld ans = bigMod(B, P, M);
		cout << ans << endl;
	}
	return 0;
}

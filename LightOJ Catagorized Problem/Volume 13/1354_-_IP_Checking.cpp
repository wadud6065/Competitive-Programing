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

	FE(j, 1, test) {
		char k;
		lld a, b, c, d;
		scanf("%lld %c %lld %c %lld %c %lld", &a, &k, &b, &k, &c, &k, &d);
		char str[50];
		scanf("%s", str);

		lld A=0, B=0, C=0, D=0;

		lld base = 7;
		FE(i, 0, 7){
			if(str[i] == '1')
				A += round(pow(2,base));
			base--;
		}

		base = 7;
		FE(i, 9, 16){
			if(str[i] == '1')
				B += round(pow(2,base));
			base--;
		}

		base = 7;
		FE(i, 18, 25){
			if(str[i] == '1')
				C += round(pow(2,base));
			base--;
		}

		base = 7;
		FE(i, 27, 34){
			if(str[i] == '1')
				D += round(pow(2,base));
			base--;
		}

		if(a == A && b == B && c == C && d == D)
			printf("Case %d: Yes\n", j);

		else
			printf("Case %d: No\n", j);
	}

	return 0;
}

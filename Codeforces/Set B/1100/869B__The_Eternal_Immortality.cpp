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
	lld a, b, result=1, i;		
	cin >> a >> b;
	i = b;
	
	if(a != b) {
		for(i = b; i>a; --i) {
		result = (result*(i%10))%10;
		if(i == a || result == 0)
	 		break;
		}
	}

	else
		result = 1;

	pt(result);

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define lld long long int
#define getI(a) scanf("%lld\n", &a)
#define getII(a,b) scanf("%lld %lld\n", &a, &b)
#define getIII(a,b,c) scanf("%lld %lld %lld\n", &a, &b, &c)
#define pt(a) printf("%lld\n", a)
#define ln printf("\n")
#define F(i,L,R) for (lld i = L; i < R; i++)
#define FE(i,L,R) for (lld i = L; i <= R; i++)
#define FR(i,L,R) for (lld i = L; i > R; i--)
#define FRE(i,L,R) for (lld i = L; i >= R; i--)
#define ALL(c) (c).begin(),(c).end()
#define PI 3.1415926535897932384626
#define pb push_back

map <string, int> ma;

void init()
{
    ma["January"]=1;
    ma["February"]=2;
    ma["March"]=3;
    ma["April"]=4;
    ma["May"]=5;
    ma["June"]=6;
    ma["July"]=7;
    ma["August"]=8;
    ma["September"]=9;
    ma["October"]=10;
    ma["November"]=11;
    ma["December"]=12;

}

bool leapYear (lld k) {
	if(k % 4 == 0) {
		if(k % 100 == 0) {
			if(k % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}

int main()
{
	lld test;
	getI(test);
	init();
	FE(j, 1, test) {
		string name1, name2;
		lld day1, day2, year1, year2, result=0, temp1, temp2, k1=0, k2=0;
		char ch;
		cin >> name1 >> day1 >> ch >> year1;
		cin >> name2 >> day2 >> ch >> year2;

		if(year2 < year1) {
			swap(year1, year2);
			swap(name1, name2);
			swap(day1, day2);
		}

		temp1 = ma[name1];
		temp2 = ma[name2];

		if(temp1 >= 3)
			year1++;

		if( (temp2 < 2) || (temp2 == 2 && day2 < 29) )
			year2--;

		year1--;

		k1 = year1/4 - year1/100 + year1/400;
		k2 = year2/4 - year2/100 + year2/400;

		printf("Case %lld: %lld\n", j, k2-k1);
	}

	return 0;
}

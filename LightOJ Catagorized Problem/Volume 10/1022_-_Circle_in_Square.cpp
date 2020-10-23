#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test, i = 1;
	double pi = 2 * acos(0.0);
	cin >> test;

	while (test--) {
		double radius, square_area, result, circle_area;
		cin >> radius;
		square_area = (2 * radius)*(2 * radius);
		circle_area = pi * radius * radius;
		result = square_area - circle_area;
		printf("Case %d: %0.2lf\n", i, result);
		i++;
	}

	return 0;
}

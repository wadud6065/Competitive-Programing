#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test, i=1;
	cin >> test;
	while (test--) {
		cout << "Case " << i << ":\n";
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int k;
		cin >> k;
		while(k--) {
			int x, y;
			cin >> x >> y;
			if(x >= x1 && x <= x2 && y >= y1 && y <= y2)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		i++;
	}
	return 0;
}

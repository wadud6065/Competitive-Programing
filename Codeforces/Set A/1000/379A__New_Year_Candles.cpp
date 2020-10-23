#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int ans = a;
	int temp = a/b;
	int remain = a % b;
	int temp2;
	while (true) {
		ans = ans + temp;
		temp2 = temp + remain;
		temp = temp2/b;
		remain = temp2 % b;
        if(temp == 0)
            break;
	}
	cout << ans << endl;
	return 0;
}
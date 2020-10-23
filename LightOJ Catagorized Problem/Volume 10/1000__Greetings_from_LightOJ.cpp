#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int T, a, b;
	cin >> T;

	int i=1;

	while(T--){
		cin >> a >> b;
		printf("Case %d: %d\n", i, a+b);
		i++;
	}
	return 0;
}

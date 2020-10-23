#include <iostream>
using namespace std;

int main()
{
	int n;
	double x=0.0;
	cin >> n;
	while(n > 0){
		x = x + (1.0/n);
		n = n - 1;
	}
	printf("%0.12lf\n", x);
	return 0;
}

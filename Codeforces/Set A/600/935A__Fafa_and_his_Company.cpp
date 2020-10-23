#include <iostream>
using namespace std;

int main()
{
	int employee, cnt = 0, k;
	cin >> employee;

	for(int i=1; i<employee; i++){
		k = employee - i;
		if(k % i == 0)cnt++;
	}

	cout << cnt << endl;

	return 0;
}

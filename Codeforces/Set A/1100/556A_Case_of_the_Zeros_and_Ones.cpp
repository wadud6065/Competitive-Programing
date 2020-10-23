#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, zero=0, one=0;
	string str, str1, str2;
	cin >> a >> str;
	for(int i=0; i<a; i++){
		if(str[i] == '0')
			zero++;
		else one++;
	}
	if(one == zero)
		cout << "0" << endl;
	else if(one > zero)
		cout << a - 2*zero << endl;
	else if(one < zero)
		cout << a - 2*one << endl;
	return 0;
}
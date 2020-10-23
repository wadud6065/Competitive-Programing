#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int m=0;

	if(a/100)
		m+=a/100, a-=(a/100)*100;

	if(a/20)
		m+=a/20, a-=(a/20)*20;

	if(a/10)
		m+=a/10, a-=(a/10)*10;

	if(a/5)
		m+=a/5, a-=(a/5)*5;

	m = m + a;

	cout << m << endl;
	return 0;
}

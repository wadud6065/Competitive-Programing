#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vec;
	int N, n, s, k, temp;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> n >> s >> k;
		for(int j=0; j<k; j++){
			cin >> temp;
			vec.push_back(temp);
		}
	}
	return 0;
}
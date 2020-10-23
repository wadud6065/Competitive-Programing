#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int vis[MAX];
vector <int> cell[MAX];

int bfs(int beg, int end)
{
	int x, cost;
	queue <int> q;
	q.push(beg);
	vis[beg] = 1;
	while(!q.empty()){
		x = q.front();
		q.pop();
		if(x == end)return 1;
		for(int i=0; i<cell[x].size(); i++)
			if(!vis[ cell[x][i] ]){
				q.push(cell[x][i]);
				vis[ cell[x][i] ] = 1;
			}
	}
	return -1;
}

int main()
{
	int n, t;
	cin >> n >> t;

	vector <int> vec;
	for(int i=0; i<n-1; i++){
		int a;
		cin >> a;
		vec.push_back(a);
	}

	for(int i=1; i<=n-1; i++)
		cell[i].push_back(i+vec[i-1]);

	int k = bfs(1, t);

	if(k == 1)cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}

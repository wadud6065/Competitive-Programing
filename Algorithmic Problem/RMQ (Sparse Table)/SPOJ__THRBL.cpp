#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[50000], st[50000][20];

void preprocesing()
{
    for(int i=0; i<N; i++)
        st[i][0] = arr[i];

    int k = log2(N);

    for(int j=1; j<=k; j++)
        for(int i=0; i+(1<<j) <= N; i++)
            st[i][j] = max( st[i][j-1], st[i + (1 << (j-1))][j-1] );
}

int main()
{
	int a, b;
	int cnt=0;
	cin >> N >> M;
	for(int i=0; i<N; i++)
		cin >> arr[i];

	preprocesing();

	for(int i=0; i<M; i++) {
		cin >> a >> b;
        int L = a - 1;
        int R = b - 1;
        int j = log2(R - L + 1);
        int maximum = max(st[L][j], st[R - (1<<j) + 1][j]);
        if(maximum <= arr[L])
            cnt++;
	}
	cout << cnt << endl;
}
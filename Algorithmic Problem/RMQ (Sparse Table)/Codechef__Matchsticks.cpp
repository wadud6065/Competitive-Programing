#include <bits/stdc++.h>
#define mx 100005
using namespace std;

int n, q;
double arr[mx], st1[mx][17], st2[mx][17];

void preprocesing1() {
	for(int i=0; i<n; i++)
		st1[i][0] = arr[i];
	
	int k = log2(n);

	for(int j=1; j<=k; j++)
		for(int i=0; i+(1<<j) <=n; i++)
			st1[i][j] = min( st1[i][j-1], st1[i+(1 <<(j-1))][j-1] );
}

void preprocesing2() {
	for(int i=0; i<n; i++)
		st2[i][0] = arr[i];

	int k = log2(n);

	for(int j=1; j<=k; j++)
		for(int i=0; i+(1<<j) <=n; i++)
			st2[i][j] = max( st2[i][j-1], st2[i+(1 <<(j-1))][j-1] );
}

int main()
{
    int L, R;
    cin >> n;
    for(int i=0; i<n; i++)
    	cin >> arr[i];

    preprocesing1();
    preprocesing2();

    cin >> q;
    while(q--) {
    	cin >> L >> R;
    	int j = log2(R - L + 1);
    	double result1 = min(st1[L][j], st1[R - (1<<j) + 1][j]);
    	double result5 = max(st2[L][j], st2[R - (1<<j) + 1][j]);

    	double result2 = 0;
    	if(L > 0) {
            int k = log2((L-1) - 0 + 1);
            result2 = max(st2[0][k], st2[L-1 - (1<<k) + 1][k]);
    	}
        cout << result2 << endl;

        double result3 = 0;
    	if(R+1 <= n-1) {
            int p = log((n-1) - (R+1) + 1);
            result3 = max(st2[R+1][p], st2[n-1 - (1<<p) + 1][p]);
    	}
        cout << result3 << endl;

        double result4 = max(result2, result3) + result1;
        result5 = ((result5 - result1)/2) + result1;

        cout << fixed << setprecision(1) << max(result4, result5) << endl;
    }
}

/*
18
3 4 2 1 5 7 9 7 10 5 12 3 1 1 2 1 3 2
1
4 10
 */

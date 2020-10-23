#include <bits/stdc++.h>
using namespace std;

int dp[2005][2005];

void dpInit() {
    memset(dp, -1, sizeof(dp));

    for(int i=0; i<2005; i++)
        dp[i][0] = 0;

    for(int i=0; i<2005; i++)
        dp[0][i] = 0;
}

int knapsack(int s, int wt[], int val[], int n) {
    if(s == 0 || n == 0)
        return 0;

    if(dp[n][s] != -1)
        return dp[n][s];

    if(wt[n-1] > s)
        return dp[n][s] = knapsack(s, wt, val, n-1);

    else {
        dp[n][s] = max(val[n-1]+knapsack(s-wt[n-1], wt, val, n-1),
                       knapsack(s, wt, val, n-1));
        return dp[n][s];
    }
}

int main()
{
    int s, n;
    cin >> s >> n;
    dpInit();
    int wt[n+1], val[n+1];

    for(int i=0; i<n; i++)
        cin >> wt[i] >> val[i];

    cout << knapsack(s, wt, val, n) << endl;
    return 0;
}
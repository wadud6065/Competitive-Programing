#include <bits/stdc++.h>
using namespace std;

int weight[105], cost[105], dp[700][700];

int knapsack(int W, int n) {
    int i, w;
    for(i=0; i<=n; i++) {
        for (w = 0; w <= W; w++) {
            if (w == 0 || i == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w) {
                dp[i][w] = max(cost[i - 1] + dp[i - 1][w - weight[i - 1]],
                               dp[i - 1][w]);
            }
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int calculateWeight(int W, int n) {
    int res = dp[n][W];
    int temp = 0, w = W;
    for(int i=n; i>0 && res >0; i--) {
        if(res == dp[i-1][w])
            continue;
        else {
            temp += weight[i-1];
            w = w - weight[i-1];
            res = res - cost[i-1];
        }
    }
    return temp;
}

int main()
{
    int W, n;
    while (true) {
        cin >> W >> n;
        memset(dp, 0, sizeof(dp));
        if(W == 0 && n == 0)
            break;

        for(int i=0; i<n; i++)
            cin >> weight[i] >> cost[i];
        cout << calculateWeight(W, n) << " " << knapsack(W, n) << "\n";
        memset(weight, 0, sizeof(weight));
        memset(cost, 0, sizeof(cost));
    }
    return 0;
}
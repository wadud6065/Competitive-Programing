#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> dif;

    for(int i=1; i<=m; i++) {
        int temp;
        cin >> temp;
        dif.push_back(temp);
    }

    sort(dif.begin(), dif.end());

    cout << dif[n-1]-dif[0] << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        char str[105], ans[105];
        scanf("%s", str);
        int size = strlen(str);
        ans[0] = str[0];
        int k = 1;
        for(int i=1; i<size; i = i+2)
            ans[k] = str[i], k++;

        ans[k] = ans[size-1];

        for(int i=0; i<k; i++)
            cout << ans[i];

        cout << "\n";
    }
    return 0;
}
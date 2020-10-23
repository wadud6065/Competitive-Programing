#include <bits/stdc++.h>
#define mx 1000005
using namespace std;

char str[mx];

int calculateLPS(string pattern) {
    int n = pattern.length();
    vector <int> lps(n);
    int index = 0;
    for(int i=1; i<n; ) {
        if(pattern[i] == pattern[index])
            lps[i] = index + 1, ++i, ++index;
        else {
            if(index != 0)
                index = lps[index - 1];
            else
                index = 0, ++i;
        }
    }
    return lps[n-1];
}

int calculateLength (string str) {
    int n = str.length();
    string revs = string(str.rbegin(), str.rend());
    int len = n - calculateLPS(revs + "#" + str);
    return n+len;
}

int main()
{
    int test;
    scanf("%d", &test);
    int i = 1;
    while(test--) {
        scanf("%s", str);
        printf("Case %d: %d\n", i, calculateLength(str));
    }
    return 0;
}
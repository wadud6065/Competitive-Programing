#include <cstdio>
#include <cstring>
#include <vector>
#define mx 1000005
using namespace std;
char text[mx];
char pattern[mx];

vector<int> computeLPS(char pattern[]) {
    int n = strlen(pattern);
    vector<int>lps(n);
    int index = 0;
    for(int i=1; i<n;) {
        if(pattern[i] == pattern[index])
            lps[i] = index+1, ++index, ++i;
        else {
            if(index != 0)
                index = lps[index-1];
            else
                index = 0, ++i;
        }
    }
    return lps;
}

int KMPsolution(char text[], char pattern[]) {
    vector<int> lps = computeLPS(pattern);
    int cnt=0;
    int i=0, j=0;
    int n = strlen(text);
    int m = strlen(pattern);
    while(i < n) {
        if(text[i] == pattern[j])
            ++i, ++j;

        else {
            if(j != 0)
                j = lps[j-1];
            else
                i++;
        }
        if(j == m)
            cnt++, j = lps[j-1];
    }
    return cnt;
}

int main()
{
    int test;
    scanf("%d", &test);
    int i = 1;
    while(test--) {
        scanf("%s", text);
        scanf("%s", pattern);
        printf("Case %d: %d\n", i, KMPsolution(text, pattern));
        ++i;
    }
    return 0;
}
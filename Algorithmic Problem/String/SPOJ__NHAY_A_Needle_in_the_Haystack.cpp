#include <bits/stdc++.h>
using namespace std;
#define mx 1000004
char text[mx];

vector<int> calculateLPS(char pattern[], int q) {
    vector <int> lps(q);
    int index = 0;
    for(int i=1; i<q; ) {
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

void KMP(string text, char pattern[], int q) {
    vector <int> lps = calculateLPS(pattern, q);
    vector <int> occurance;
    int i=0, j = 0;
    int n = text.length();
    while (i<n) {
        if(text[i] == pattern[j])
            ++i, ++j;

        else {
            if(j != 0)
                j = lps[j-1];
            else
                ++i;
        }

        if(j == q)
            occurance.push_back(i-q);
    }
    if(!occurance.empty()){
        for(int i=0; i<occurance.size(); i++)
            printf("%d\n", occurance[i]);
    } else
        printf("\n\n");
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        char pattern[n+1];
        scanf("%s", pattern);
        scanf("%s", text);
        KMP(text, pattern, n);
    }
    return 0;
}
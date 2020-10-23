#include <bits/stdc++.h>
#define mx 100005
using namespace std;

int calulateLPS(string str) {
    int n = str.length();
    vector<int> lps(n);
    int index = 0;
    for(int i=1; i<n; ) {
        if(str[i] == str[index])
            lps[i] = index+1, ++i, ++index;

        else {
            if(index != 0)
                index = lps[index-1];

            else
                lps[i] = 0, ++i;
        }
    }
    return lps[n-1];
}

void extendedToPalindrome(string str) {
    string rev = string(str.rbegin(), str.rend());
    string tempStr = rev + "#" + str;
    int len = str.length() - calulateLPS(tempStr);
    for(int i = len-1; i >= 0; i--)
        str.append(1,str[i]);
    cout << str << "\n";
}

int main()
{
    char str[mx];
    while (scanf("%s", str) != EOF) {
        extendedToPalindrome(str);
    }
    return 0;
}
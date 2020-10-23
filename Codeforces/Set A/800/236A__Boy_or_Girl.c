#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c=0;
    for(int i=0; i<s.length(); i++)
        for(int j=0; j<s.length(); j++){
            if(i==j)continue;
            if(s[i]==s[j])s[i]=NULL;
        }
    for(int i=0; i<s.length(); i++)
        if(s[i] >= 'a' && s[i] <= 'z')c++;
    if(c % 2 != 0)cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}
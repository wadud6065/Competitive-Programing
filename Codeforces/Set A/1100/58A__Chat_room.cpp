#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int temp, cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 'h') {
            temp = i+1;
            cnt++;
            break;
        }
    ///cout << cnt << " "  << temp << endl;
    for(int i=temp; i<str.length(); i++)
        if(str[i] == 'e') {
            temp = i+1;
            cnt++;
            break;
        }
    //cout << cnt << " "  << temp << endl;
    for(int i=temp; i<str.length(); i++)
        if(str[i] == 'l') {
            temp = i+1;
            cnt++;
            break;
        }
    //cout << cnt << " "  << temp << endl;
    for(int i=temp; i<str.length(); i++)
        if(str[i] == 'l') {
            temp = i+1;
            cnt++;
            break;
        }
    //cout << cnt << " "  << temp << endl;
    for(int i=temp; i<str.length(); i++)
        if(str[i] == 'o') {
            temp = i+1;
            cnt++;
            break;
        }
    //cout << cnt << " "  << temp << endl;
    if(cnt == 5)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
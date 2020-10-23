#include <bits/stdc++.h>
using namespace std;
#define mx 1000005
int arr[mx];

void process(int n) {
    int cnt=0;
    for(int i=0; i<n; i++)
        if(arr[i] % 2 != 0)
            cnt++;

    if(cnt == 0)
        cout << "Second" << endl;

    else
        cout << "First" << endl;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    process(n);

    return 0;
}
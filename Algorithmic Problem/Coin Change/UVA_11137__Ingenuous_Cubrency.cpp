#include <bits/stdc++.h>
using namespace std;
unsigned long long int arr[22];
unsigned long long int table[10005];

void cubrency() {
    table[0] = 1;
    for(int i=0; i<10004; i++)
        for(int j=arr[i]; j<21; j++)
            table[j] += table[j-arr[i]];
}

int cubeFunc(int a) {
    int temp = 1;
    for(int i=0; i<3; i++)
        temp = temp*a;
    return temp;
}

int main()
{
    unsigned long long int n;
    for(int i=0; i<21; i++)
        arr[i] = cubeFunc(i+1);
    cubrency();
    while(1) {
        cin >> n;
        if(n == 10000)
            break;
        cout << table[n] << endl;
    }
    return 0;
}
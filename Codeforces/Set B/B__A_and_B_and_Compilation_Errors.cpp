#include<bits/stdc++.h>
#define sz 100001
using namespace std;

int searching(int example1[], int example2[], int size)
{
    int k;
    for(int i=0; i<size; i++)
        if(example1[i] != example2[i]){
            k = example1[i];
            break;
        }
    return k;
}

int main()
{
     int size;
     cin >> size;

     int arr1[sz], arr2[sz], arr3[sz];

     for(int i=0; i<size; i++)
         cin >> arr1[i];

     sort(arr1, arr1+size);

     for(int i=0; i<size-1; i++)
         cin >> arr2[i];

     sort(arr2, arr2+size-1);

     for(int i=0; i<size-2; i++)
         cin >> arr3[i];

     sort(arr3, arr3+size-2);

     int a = searching(arr1, arr2, size);
     cout << a << endl;

     int b = searching(arr2, arr3, size-1);
     cout << b << endl;

     return 0;
}

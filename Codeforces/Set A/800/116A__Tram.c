#include<stdio.h>
int main()
{
   int a[2000], b[2000];
   int c, i, j;
   scanf("%d", &c);
 
   for(i = 0; i < c*2; i++){
    scanf("%d", &a[i]);
   }
 
   b[0] = a[1];
   for(i = 1; i < c; i++){
    b[i] = b[i-1] - a[i*2] + a[i*2 + 1];
   }
   int temp, k;
   for(i = 1; i < c-1; i++)
    for(j = 0; j < c; j++){
            k = j+1;
        if(b[j] < b[k]){
            temp = b[k];
            b[k] = b[j];
            b[j] = temp;
        }
   }
 
   printf("%d\n", b[0]);
   return 0;
}
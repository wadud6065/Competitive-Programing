#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, sum=0;
  scanf("%d", &n);
  int arr[1000];
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<n; i++){
    sum = sum + arr[i];
  }
  float ans = sum/(float)n;
  printf("%0.12f\n", ans);
  return 0;
}
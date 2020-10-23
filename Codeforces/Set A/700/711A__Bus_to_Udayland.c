#include<stdio.h>
int main()
{
  int n, cnt=0;
  scanf("%d", &n);
  char arr[n][10];
  for(int i=0; i<n; i++){
    scanf("%s", arr[i]);
  }
  for(int i=0; i<n; i++){
    if(arr[i][0]== 'O' && arr[i][1] == 'O'){
      printf("YES\n");
      arr[i][0]= '+';
      arr[i][1]= '+';
      for(int i=0; i<n; i++){
        printf("%s\n", arr[i]);
      }
      break;
    }
    else if(arr[i][3]== 'O' && arr[i][4] == 'O'){
      printf("YES\n");
      arr[i][3]= '+';
      arr[i][4]= '+';
      for(int i=0; i<n; i++){
        printf("%s\n", arr[i]);
      }
      break;
    }
    else cnt++;
  }
  if (cnt == n)printf("NO\n");
  return 0;
}
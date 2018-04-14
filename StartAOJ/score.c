#include<stdio.h>

int main()
{
  int n;  /* 審判の数 */
  scanf("%d", &n);
  while(n > 0) {
    int sum = 0;
    int i;
    for(i = 0; i < n; i++) {
      int s = 0; /* 各審判のスコア */
      scanf("%d", &s);
      sum += s;
    }
    printf("%d\n", sum);
    scanf("%d", &n);
  }
  return 0;
}



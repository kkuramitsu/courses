#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  while(n > 0) {
    int sum = 0;
    int i;
    for(i = 0; i < n; i++) {
      int s = 0;
      scanf("%d", &s);
      sum += s;
    }
    printf("%d\n", sum);
    scanf("%d", &n);
  }
  return 0;
}



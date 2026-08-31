#include <stdio.h>
void main()
{
  int i = 1, n, ans = 0;
  printf("enter n:");
  scanf("%d", &n);

  while (i <= n){
    if (i % 2 == 0)
    {
      ans = ans - i;
    }
    else
    {
      ans = ans + i;
    }
    i++;
  }
  printf("sum of series=%d\n", ans);
}
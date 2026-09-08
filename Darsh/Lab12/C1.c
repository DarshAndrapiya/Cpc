#include <stdio.h>
void main()
printf("enter n:");
scanf("%d",&n);
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("");
        }
        int num=1;
        for (int j=1; j<n-i;j++)
        {
            printf("%d",num);
                num*=(i-j/j+i);
        }
    }
}
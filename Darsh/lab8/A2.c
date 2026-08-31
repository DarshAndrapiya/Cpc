#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
        if(i%2!=0)
        printf("%d",i); /* code */
        i=i+1;
    }
    while(i<=n);
}

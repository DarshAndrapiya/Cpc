#include<stdio.h>
void main(){
    int sum=0,n,rem=0;
    printf("enter your number :");
    scanf("%d",&n);
    rem=n%10;
    while (n>=10)
    {
        n=n/10;
    }
    sum=rem+n;
    printf("%d",sum);
}
#include<stdio.h>
void main(){
    int n,sum=0,result=0;
    printf("enter terms:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
      sum=i+sum;
      result=sum++;
    }
    printf("%d",result);
}
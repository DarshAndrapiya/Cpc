#include<stdio.h>
void main(){
    int a=0,b=1,n=10;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        int c=a+b;
        a=b;
        b=c;
    }
}
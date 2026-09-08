#include<stdio.h>
void main(){

    for(int i=1,n = 5;i<=n;i++)
{
    int count=n;
    for(int j=1;j<=i;j++)
    {  
        printf("%d",count);
        count--;
    }
    printf("\n");
}

}

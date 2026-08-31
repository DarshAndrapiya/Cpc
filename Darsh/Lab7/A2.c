#include<stdio.h>
void main()
{
     int a, b, c;
     int ch;
     printf("enter the two number");
     scanf("%d %d", &a, &b);
     scanf("%d",&ch);
     switch(ch){
        case 1:c=a+b;
        printf("%d", c);
        break;
        case 2:c=a-b;
        printf("%d", c);
        break;
        case 3:c=a*b;
        printf("%d", c);
        break;
        case 4:c=a/b;
        printf("%d", c);
        break;

     }
}

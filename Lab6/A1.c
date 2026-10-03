#include<stdio.h>
void main()
{
    float a,b,ans=0;
    int choice;
    printf("enter two number");
    scanf("%f %f",&a,&b);
    printf("enter choice:");
    scanf("%d",&choice);
    if(choice==1){
        ans=a+b;
        printf("%f",ans);
    }
    else if (choice==2){
        ans=a-b;
        printf("%f",ans);
    }
    else if (choice==3){
        ans=a*b;
        printf("%f",ans);
    }
    else if (choice==4){
        ans=a/b;
        printf("%f",ans);
    }
}

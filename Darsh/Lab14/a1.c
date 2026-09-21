#include<stdio.h>
void main(){
    int n;
        printf("enter your numer");
        scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n;i++){
        printf("%d\n",arr[i]);
    }

}

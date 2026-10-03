#include<stdio.h>
int main()
{
    int i = 1, even = 0, odd = 0;

    while(i<=10){
    if (i%2==0){
        even++;
    }
    else{
        odd++;
    }
    i++;
 }

 printf("%d %d",odd,even);

 return 0;
}
    
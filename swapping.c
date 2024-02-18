#include<stdio.h>
int main(){
    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);
    x=x+y;
     y=x-y;
   x=x-y;
 
   printf("x = %d \ny = %d ",x,y);
   return 0;


}
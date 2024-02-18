#include<stdio.h>
int main(){
    int x,y,t;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enter y = ");
    scanf("%d",&y);
    t=x;
     x=y;
   y=t;
 
   printf("x = %d \ny = %d ",x,y);
   return 0;


}
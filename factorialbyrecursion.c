#include<stdio.h>
int fact(int y){
if(y==0)
return 1;
else 
return y*fact(y-1);
     
}
int main(){
int n;

printf("Enter the value of n = ");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}
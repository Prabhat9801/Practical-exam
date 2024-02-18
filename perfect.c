#include<stdio.h>
int main(){
    int x,i,z,sum=0;
    printf("Enter the x = ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
    if(x%i)
    sum=sum+i;
    }
    if(sum==x){
        printf("%d is the perfect number.",x);
    } 
    else 
    {
         printf("%d is not the perfect number.",x);
    }
return 0;
     
    

}
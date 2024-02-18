#include<stdio.h>
int main(){
    int n,t=1,i;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        t=t*i;

    } 
    printf("%d",t);
    return 0;
}
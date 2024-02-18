#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if(n%i!=0){
            printf("It is the prime number");
            break;

        } 
        else {
            printf("It is not the prime number");
            break;
        }
    } return 0;
}
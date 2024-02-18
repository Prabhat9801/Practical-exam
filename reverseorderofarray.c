#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the elements of the array = ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        
    } 
    printf("The reverse order of the array = ");
    for(i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
}

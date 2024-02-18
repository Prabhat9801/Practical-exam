#include<stdio.h>
int main(){
    float celsius;
    printf("Enter the celsius = ");
    scanf("%f",&celsius);
    float fahrenheit = (9/5 * celsius) + 32;
    printf("The Conversion of %.2f degree Celsius into Fahrenheit is %.2f degree.",celsius,fahrenheit);
    return 0;
}
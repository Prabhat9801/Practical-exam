#include <stdio.h>
int main() {
    int x, y, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &x);
    y = x;
while (y != 0) {
      remainder = y % 10;
        result += remainder * remainder * remainder;
        
      y /= 10;
    }
if (result == x)
        printf("%d is an Armstrong number.", x);
    else
        printf("%d is not an Armstrong number.", x);

    return 0;
}
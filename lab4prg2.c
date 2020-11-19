/* Write a program that asks the user to enter two integers, then calculates and displays their
    greatest common divisor(GCD):
*/

#include <stdio.h>

int main(void)
{
    int a, b, r;

    
    scanf("%d", &a);
    scanf("%d", &b);

    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", a);

    return 0;
}
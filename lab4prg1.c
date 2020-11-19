/* Write a program that finds the Largest in a series of numbers entered by the user. The 
    program must prompt the user to enter numbers one by one. When the user enters 
    0 or a negative number, the program must display the largest nonnegative numbers entered:
*/

#include <stdio.h>

int main()
{
    float max = 0.0f;
    float num;

    do {
        //printf("Enter a number : ");
        scanf("%f", &num);

        if (num > max)
            max = num;   
    } while (num > 0);

    printf("\nThe largest number entered was %.2f\n", max);

    return 0;


}
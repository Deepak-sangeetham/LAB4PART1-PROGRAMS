/* Write a program to reverse the number you entered*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);


    printf("The reverse of the given number : ");
    do
    {
        printf("%d", n %10);  
        n = n / 10;
    } while (n > 0);

        printf("\n");

    return 0;
    
}
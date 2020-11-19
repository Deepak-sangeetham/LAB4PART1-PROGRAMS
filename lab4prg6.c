/*Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n.*/

#include <stdio.h>

int main()
{
    int n, even;

    printf("Enter a number : ");
    scanf("%d", &n);

    
    even = 2;
    while (even * even <= n){ 
        printf("%d\n", even * even);
        even = even + 2;
    }

    return 0;
}   
/* Write a program that approximates e by computing the value of
    1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
    where n is an integer entered by the user.
*/

#include <stdio.h>

int main()
{
    int n, i, a;
    float e;

    printf("Enter n : ");
    scanf("%d", &n);

    i = 1; 
    a = 1;
    e = 1.0f;
    while (i <= n){
        e += 1.0f /(a = a * i);
        i += 1;
    }
    printf("Approximation of e is :%f\n", e);

    return 0;

}
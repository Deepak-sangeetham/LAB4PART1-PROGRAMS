/* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms: */

#include <stdio.h>

int main(void)

{
    int m, n, r, gcd, k, l, a, b;

    
    
    //printf("Enter a fraction : ");
    scanf("%d/%d", &m, &n);

    k = m ;
    l = n;

    while (n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    
    gcd = m;

    a = k / gcd;
    b = l / gcd;

    printf("In lowest terms : %d/%d\n", a, b);

    return 0;


}
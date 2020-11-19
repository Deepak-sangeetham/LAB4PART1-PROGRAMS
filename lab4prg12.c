/*Modify last program so that it continues adding terms until the current term becomes less than epsilon,
    where epsilon is a small (floating-point) number entered by the user.
*/

#include <stdio.h>

int main()
{
    int a, i;
    float e , epsilon, term;

    printf("Enter epsilon : ");
    scanf("%f", &epsilon);

    i = 1; 
    a = 1;
    e = 1.0f;
    term = 1.0f;
    while (term > epsilon){
        term = 1.0f / (a = a * i);
        e = e + term;
        i += 1;
    }
    printf("Approximation of e is :%f\n", e);

    return 0;

}
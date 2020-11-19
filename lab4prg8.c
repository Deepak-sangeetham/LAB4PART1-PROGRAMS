 /* Write a program that prints a one-month calendar. the user specifies the number of days in the month and the day of the week on which the month begins: */

#include <stdio.h>

int main()
{
    int i, n, d, day;

    printf("Enter number of days in a month : ");//The number of days should be less than 32. 
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &d);

    printf("\n Su Mo Tu We Th Fr Sa\n");
    for (i = 1, day =1; i <= (n + d - 1); ++i){
        if (i < d)
            printf("   ");
        else
            printf("%3d", day++);
        
        if (i % 7 == 0)
            printf("\n");
        
    }
    printf("\n");
    return 0;
}
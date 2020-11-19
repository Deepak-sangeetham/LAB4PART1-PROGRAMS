 /* Write a program that determines the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered: */
#include <stdio.h>

int main()
{
    int mm1, dd1, yy1, mm2, dd2, yy2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &mm1, &dd1, &yy1);

    while (1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &mm2, &dd2, &yy2);

         if (dd2 == 0 && yy2 == 0 && mm2 == 0)
            break;
         if ((yy2 < yy1) || (yy1 == yy2 &&  mm2 < mm1) || (yy1 == yy2 && mm1 == mm2 && dd2 < dd1)){

             dd1 = dd2;
             mm1 = mm2;
             yy1 = yy2; 
         }

        
   }
   printf("%d/%d/%.2d is the earliest date.\n", mm1, dd1, yy1);
   return 0;

}
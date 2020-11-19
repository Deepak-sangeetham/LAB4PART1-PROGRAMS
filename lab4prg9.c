/* Modify the program so that it also asks the user to enter number of payments and then displays the balance remaianing after easch payments.*/
#include <stdio.h>

int main()
{
    float loan = 0.0f, rate = 0.0f, payment = 0.0f;
    int i, num;
    

    printf("Enter amount of loan :$ ");
    scanf("%f", &loan);

    printf("Enter interest rate : "); // Interest rate should not be more than 10.
    scanf("%f", &rate);

    printf("Enter monthly payment : ");
    scanf("%f", &payment);

    printf("Enter number of payments : ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i){
    loan = (loan - payment) + (loan * rate /100 /12);
    printf("Balance remaining after %d payment : $ %.2f\n", i, loan);
    }
    

    return 0;
    


    

}



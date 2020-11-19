/* Add a loop to the broker.c program of section 5.2 so that user can enter more than one trade and the program
    will calculate the commission on each. The program should terminate the user enters 0 as the tade value:
*/

#include <stdio.h>

int main()
{
    float commission, value;

    printf("Enter value of trade : ");
    scanf("%f", &value);

    while (value > 0){

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
        
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
        
    else if (value < 20000.00f)
        commission = 76.00f + 0.00034f * value;
        
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
        

    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
        
    else
        commission = 255.00f + 0.0009 * value;
        

    if (commission < 39.00f)
        commission = 39.00f;
        

    printf(" commission: $%.2f\n\nEnter value of trade:", commission);
    scanf("%f", &value);
    }
    
    return 0;

}

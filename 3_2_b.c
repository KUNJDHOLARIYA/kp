// This code is prepared by kunj dholariya 22CE027
// pre and post increment or decrement
#include <stdio.h>
int main()
{
    int yellow, pink, cal;
    printf("\n Eter the value of yellow:");
    scanf("%d", &yellow);
    printf("\n Enter the value of pink:");
    scanf("%d", &pink);
    cal = (++yellow) + (yellow++) + (--yellow) + (++pink) - (--pink) - (--pink);
    printf("\n Value of calculate is: %d", cal);
    printf("\n Count of yellow after evaluation: %d", yellow);
    printf("\n Count of pink after evaluation: %d", pink);
    printf("\n This programme made by kunj dholariya 22CE027");
}

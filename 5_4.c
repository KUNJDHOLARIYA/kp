// This code is prepared by kunj dholariya 22CE027
//implement company policy
#include <stdio.h>

int main()
{
    int Stock, Order;
    char Credit;

    printf("Enter Credit:");
    scanf("%c", &Credit);
    printf("Enter Order: ");
    scanf("%d", &Order);
    printf("Enter Stock:");
    scanf("%d", &Stock);
    if (Credit == 'Y' || 'y' && Stock >= Order)
        printf("Your order is placed successfully");
    else if (Credit == 'N' || 'n')
        printf("Please fullfill your credit first");
    else if (Credit == 'Y' || 'y' && Stock < Order)
        printf("The Order is out of Stock");
    printf("\n This programme made by kunj dholariya 22CE027");
    return 0;
}
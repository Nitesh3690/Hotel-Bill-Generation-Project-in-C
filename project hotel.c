#include<stdio.h>
#include<string.h>

int dish, qty, answer, total;


void main()
{
    printf("\t\t\t\t\t\tWELCOME TO HOTEL TAAJ\n\n");
    printf("--Please choose dishes from the digital menu by entering the numbers written before the dish names:--\n\n\tDISHES\t\t\t\t\tPRICE\n\n1) Mutton Biryani \t-\t\t\tRs. 350/-\n2) Chicken Biryani \t-\t\t\tRs. 250/-\n3) Prawn Biryani \t-\t\t\tRs. 450/-\n4) Egg Biryani \t\t-\t\t\tRs. 250/-\n5) Fish Fry \t\t-\t\t\tRs. 200/-\n6) Chicken Tandoori \t-\t\t\tRs. 200/-\n\n");
    do
        {
    printf("\nPlease enter dish number\n");
    scanf("%d", &dish);
    if(dish > 6)
    {
    printf("Invalid choice! Please choose dishes from the above list\n");
    exit(0);
    }
    printf("\nPlease enter the quantity\n");
    scanf("%d", &qty);
    printf("\nDo you want to add more dishes?\n\nEnter 1 to add more or 0 to exit and proceed to generate bill\n");
    scanf("%d", &answer);

    if(dish == 1)
    {
        total += 350 * qty;
    }
    else if(dish == 2)
    {
        total += 250 * qty;
    }
    else if(dish == 3)
    {
        total += 450 * qty;
    }
    else if(dish == 4)
    {
        total += 250 * qty;
    }
    else if(dish == 5)
    {
        total += 200 * qty;
    }
    else if(dish == 6)
    {
        total += 200 * qty;
    }
        }
    while (answer!=0);
    printf("\n\nYour total bill is %d Rupees. Please pay at the counter.\n\n", total);
}

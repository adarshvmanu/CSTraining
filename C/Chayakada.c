#include<stdio.h>
void main()
{
    char choice;
    printf("Menu\n1. Coffee\n2. Tea\n3. Soup\n4. Beverages\n");
    printf("Enter your choice : ");
    scanf("%c",&choice);
    switch (choice)
    {
        case 'c':
        case 'C':
            printf("\nSub Menu");
            printf("\n1. Espresso Coffee\n2. Cappuccino Coffee\n3. Latte Coffee");
            printf("\nEnter your choice : ");
            scanf("%c",&choice);
            switch (choice)
            {
                case 1:
                    printf("Welcome to CCD Enjoy your Espresso Coffee");
                    break;
                case 2:
                    printf("Welcome to CCD Enjoy your Cappuccino Coffee");
                    break;
                case 3:
                    printf("Welcome to CCD Enjoy your Latte Coffee");
                    break;
                default:
                    printf("\nInvalid choice");
            }
            break;
        case 't':
        case 'T':
            printf("\nSub Menu");
            printf("\n1. Plain Tea\n2. Assam Tea\n3. Ginger Tea\n4. Cardamom Tea\n5. Masala Tea\n6. Lemon Tea\n7. Green Tea\n8. Organic Darjeeling Tea");
            printf("\nEnter your choice : ");
            scanf("%c",&choice);
            switch (choice)
            {
                case 1:
                    printf("Welcome to CCD Enjoy your Plain Tea");
                    break;
                case 2:
                    printf("Welcome to CCD Enjoy your Assam Tea");
                    break;
                case 3:
                    printf("Welcome to CCD Enjoy your Ginger Tea");
                    break;
                case 4:
                    printf("Welcome to CCD Enjoy your Cardamom Tea");
                    break;
                case 5:
                    printf("Welcome to CCD Enjoy your Masala Tea");
                    break;
                case 6:
                    printf("Welcome to CCD Enjoy your Lemon Tea");
                    break;
                case 7:
                    printf("Welcome to CCD Enjoy your Green Tea");
                    break;
                case 8:
                    printf("Welcome to CCD Enjoy your Organic Darjeeling Tea");
                    break;
                default:
                    printf("\nInvalid choice");
            }
            break;
        case 's':
        case 'S':
            printf("\nSub Menu");
            printf("\n1. Hot and Sour Soup\n2. Veg Corn Soup\n3. Tomato Soup\n4. Spicy Tomato Soup");
            printf("\nEnter your choice : ");
            scanf("%c",&choice);
            switch (choice)
            {
                case 1:
                    printf("Welcome to CCD Enjoy your Hot and Sour Soup");
                    break;
                case 2:
                    printf("Welcome to CCD Enjoy your Veg Corn Soup");
                    break;
                case 3:
                    printf("Welcome to CCD Enjoy your Tomato Soup");
                    break;
                case 4:
                    printf("Welcome to CCD Enjoy your Spicy Tomato Soup");
                    break;
                default:
                    printf("\nInvalid choice");
            }
            break;
        case 'b':
        case 'B':
            printf("\nSub Menu");
            printf("\n1. Hot Chocolate Drink\n2. Badam Drink\n3. Badam-Pista Drink");
            printf("\nEnter your choice : ");
            scanf("%c",&choice);
            switch (choice)
            {
                case 1:
                    printf("Welcome to CCD Enjoy your Hot Chocolate Drink");
                    break;
                case 2:
                    printf("Welcome to CCD Enjoy your Badam Drink");
                    break;
                case 3:
                    printf("Welcome to CCD Enjoy your Badam-Pista Drink");
                    break;
                default:
                    printf("\nInvalid choice");
            }
            break;         
    }
}
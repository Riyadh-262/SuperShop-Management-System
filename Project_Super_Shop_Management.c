//Project super shop management:
#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct Product products[100];
    int numProducts = 0;

    while (1)
    {
        printf("Supermarket Management System\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Make Sale\n");
        printf("4. Exit\n");
        printf("Choose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (numProducts >= 100)
            {
                printf("Maximum number of products reached.\n");
            }
            else
            {
                printf("Enter product details:\n");
                printf("ID: ");
                scanf("%d", &products[numProducts].id);
                printf("Name: ");
                scanf("%s", products[numProducts].name);
                printf("Price: ");
                scanf("%f", &products[numProducts].price);
                printf("Quantity: ");
                scanf("%d", &products[numProducts].quantity);
                numProducts++;
                printf("Product added successfully.\n");
            }
        }
        else if (choice == 2)
        {
            printf("Product List:\n");
            for (int i = 0; i < numProducts; i++)
            {
                printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
                       products[i].id, products[i].name, products[i].price, products[i].quantity);
            }
        }
        else if (choice == 3)
        {
            if (numProducts == 0)
            {
                printf("No products available.\n");
            }
            else
            {
                int productId, quantity;
                printf("Enter product ID for sale: ");
                scanf("%d", &productId);
                printf("Enter quantity sold: ");
                scanf("%d", &quantity);

                for (int i = 0; i < numProducts; i++)
                {
                    if (products[i].id == productId)
                    {
                        if (products[i].quantity >= quantity)
                        {
                            products[i].quantity -= quantity;
                            printf("Sale completed. Total amount: %.2f\n", products[i].price * quantity);
                        }
                        else
                        {
                            printf("Not enough quantity available.\n");
                        }
                        break;
                    }
                }
            }
        }
        else if (choice == 4)
        {
            printf("Existing Supermarket Management System.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}


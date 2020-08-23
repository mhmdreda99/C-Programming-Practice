#include <stdio.h>
#include <stdlib.h>
int main()
{

    switch (menu())
    {
    case 1:
        printf("Your choice is Cheese Cake\n");
        break;
    case 2:
        printf("Your choice is Molten Cake\n");
        break;
    case 3:
        printf("Your choice is Big Mac\n");
        break ;
    default:
        printf("Please choose one of our menu orders\n");
    }
    return 0;
}
int menu()
{
    int choice=0;
    printf("=== Menu ===\n");
    printf("1. Cheese Cake\n");
    printf("2. Molten Cake\n");
    printf("3. Big Mac\n");
    printf("What's you choice\n");
    scanf("%d",&choice);
    return choice;
}

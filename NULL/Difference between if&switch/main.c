#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. MC Deluxe\n");
    printf("3. MC Bacon\n");
    printf("4. Big Mac\n");
    printf("Your choice?\n");
    scanf("%d",&choice);
    //if (choice==1)
    switch(choice){
        case 1:
        printf("Your choice is Royal Cheese\n");
        break;
   // else if (choice==2)
        case 2:
        printf("Your choice is MC Deluxe\n");
        break;
   // else if (choice==3)
        case 3:
        printf("Your choice is MC Bacon\n");
        break;
  //  else if (choice==4)
        case 4:
        printf("Your choice is Big Mac\n");
        break;
    //else
        default:
        printf("Please choice one of our menu orders\n");
                }
return 0;
}

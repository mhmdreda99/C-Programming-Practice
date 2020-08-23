#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(NULL));
    int mysteriousNumber=0,counter=0,enteredNumber=0,playAgain=0,level;
        printf("== Levels ==\n");
        printf("1. Easy\n");
        printf("2. Intermediate\n");
        printf("3. Hard\n");
        scanf("%d",&level);
        if (level==1)
        {
    int mysteriousNumber=0,counter=0,enteredNumber=0,playAgain=0,level;
    const int MAX=10,MIN=0;
    do
    {
        counter=0;
    mysteriousNumber=(rand()%(MAX-MIN+1))+MIN;
    while (enteredNumber!=mysteriousNumber)
    {

    printf("Please enter the mysterious number\n");
    scanf("%d",&enteredNumber);
        if (enteredNumber>mysteriousNumber)
            printf("You've entered a bigger number, please try again \n\n");
        else if (enteredNumber<mysteriousNumber)
            printf("You've entered a smaller number, please try again \n\n");
        else
              {

               printf("Brave, You've entered the mysterious number after %d times\n",(counter+1));
               printf("Do you want to play again?\n");
               printf("Press 1 to play again \n");
               scanf("%d",&playAgain);
              }
        counter++;
    }

    }
    while (playAgain==1);
                }
else if (level==2)
{
     int mysteriousNumber=0,counter=0,enteredNumber=0,playAgain=0,level;
                 const int MAX=100,MIN=0;
                 do
    {
        counter=0;
    mysteriousNumber=(rand()%(MAX-MIN+1))+MIN;
    while (enteredNumber!=mysteriousNumber)
    {

    printf("Please enter the mysterious number\n");
    scanf("%d",&enteredNumber);
        if (enteredNumber>mysteriousNumber)
            printf("You've entered a bigger number, please try again \n\n");
        else if (enteredNumber<mysteriousNumber)
            printf("You've entered a smaller number, please try again \n\n");
        else
              {

               printf("Brave, You've entered the mysterious number after %d times\n",(counter+1));
               printf("Do you want to play again?\n");
               printf("Press 1 to play again \n");
               scanf("%d",&playAgain);
              }
        counter++;
    }

    }
    while (playAgain==1);
        }
else if (level==3)
{
     int mysteriousNumber=0,counter=0,enteredNumber=0,playAgain=0,level;
                 const int MAX=1000,MIN=0;
                 do
    {
        counter=0;
    mysteriousNumber=(rand()%(MAX-MIN+1))+MIN;
    while (enteredNumber!=mysteriousNumber)
    {

    printf("Please enter the mysterious number\n");
    scanf("%d",&enteredNumber);
        if (enteredNumber>mysteriousNumber)
            printf("You've entered a bigger number, please try again \n\n");
        else if (enteredNumber<mysteriousNumber)
            printf("You've entered a smaller number, please try again \n\n");
        else
              {

               printf("Brave, You've entered the mysterious number after %d times\n",(counter+1));
               printf("Do you want to play again?\n");
               printf("Press 1 to play again \n");
               scanf("%d",&playAgain);
              }
        counter++;
    }

    }
    while (playAgain==1);

}
else
    printf("Please enter a number from 1:3\n");

        }

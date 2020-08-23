#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int max=10,min=1;
    int mysteriousnumber=0;
    int enterednumber=0;
    int counter =0;
    int playagain=0;
    int level=0;

    srand(time(NULL));
    mysteriousnumber=(rand()%(max-min+1)+min);

    printf("Please choose the level you need \n");
    printf("1:Easy \n");
    printf("2:Intermediate \n");
    printf("3:Hard \n");
    scanf("%d",&level);
    if (level==1)
{

    while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            printf("Do you want to play again?\n");
            printf("1:Yes, i want to play again \n");
            printf("2:No, that's enough for now \n");
            scanf("%d",&playagain);
            if (playagain==1)
            {
                 mysteriousnumber=(rand()%(max-min+1)+min);
                while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            }

           }

    }
    else
    printf("See you soon, Bye ^_^ \n");


} counter++;

    }

}
else if (level==2)
{
     int max=100,min=1;
    int mysteriousnumber=0;
    int enterednumber=0;
    int counter =0;
    int playagain=0;

     mysteriousnumber=(rand()%(max-min+1)+min);

    while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            printf("Do you want to play again?\n");
            printf("1:Yes, i want to play again \n");
            printf("2:No, that's enough for now \n");
            scanf("%d",&playagain);
            if (playagain==1)
            {
                 mysteriousnumber=(rand()%(max-min+1)+min);
                while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            }

           }

    }
    else
    printf("See you soon, Bye ^_^ \n");


} counter++;

    }
}
    else
    {
           int max=1000,min=1;
    int mysteriousnumber=0;
    int enterednumber=0;
    int counter =0;
    int playagain=0;

     mysteriousnumber=(rand()%(max-min+1)+min);

    while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            printf("Do you want to play again?\n");
            printf("1:Yes, i want to play again \n");
            printf("2:No, that's enough for now \n");
            scanf("%d",&playagain);
            if (playagain==1)
            {
                 mysteriousnumber=(rand()%(max-min+1)+min);
                while (enterednumber!=mysteriousnumber)
    {
        printf("Please enter a number to be compared \n");
        scanf("%d",&enterednumber);
        if (enterednumber<mysteriousnumber)
            printf("Smaller, try again \n");
        else if (enterednumber>mysteriousnumber)
            printf("Greater, try again \n");
        else
           {
            printf("Wow, you entered the mysterious number! you've tried %d times before you win \n",counter);
            }


           }
    }
    else
    printf("See you soon, Bye ^_^ \n");

} counter++;

    }
    }
}

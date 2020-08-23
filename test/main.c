#include<stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159

void main ()
{
  

int main() 
{
    char ch;
    char s[50];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",s);    
    
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s",ch,s,sen);    
    return 0;
}















   /* int values[]={1,2,3,4,5,6};
    int sum=0 ;
    for(int i =0 ; i<values[i];i++)
    {
        sum+=values[i];

    }
    printf("sum of array is :%d",sum);    */
}



























/*
// program to store 10 s. degree and print it
void main()
{
    int degree[10
    ] ;
      int nstudents=1;
        for(int i=0 ; i<10 ; i++)
        {

           printf("please enter student %d degree :\n\r",nstudents++  );
           scanf("%d",&degree[i] );

        }

        for(int i=0 ; i<10 ; i++)
        {
         printf("student %d degree is %d :\n\r",i + 1, degree[i] );
        }
}

/*




/*
void main(void)
{
float degree ,   sum ;
int nstudents = 1;

    while (1)
    {
    printf("please enter student %d degree:\n\r", nstudents++);
    scanf("%f",&degree);

    if (degree<0) break;
    sum+=degree;


    }
printf("average of student degrees is : %f \n\r",sum/nstudents);


}

*/




   /*=============================================================*/

   /*
    //Following program calculates the average students degree for any given students number.
    int i , nStudents ;
    float degree , sum ;
    printf("please enter number of students : ");
    scanf("%d",&nStudents);

    for(i=1 , sum=0 ;  i<nStudents ;i++ )
    {

        printf("please enter the %d student degree : ", i);
        scanf("%f",&degree);
        sum += degree;

    }

    printf("average of %d students degrees is :%f \n\r ",i,sum /nStudents );


} */



   /*=============================================================*/
/*
// get Summation of values between (1 and 99)
    int i , sum ;
    for(i=1;i<99;i++)
    {
        sum+=i ;



    }

    printf("Summation of values between (1 and 99) is : %d",sum);
*/

/*=============================================================*/
    /*

    int radious ;
    float area , circumfrence ;
    char choice ;

    printf("please enter the circle radious : \r\n  ");
    scanf("%f",&radious);
    printf("please choose A for print area \r\n and C for print circum.:   ");

   switch(getche())
   {
   case 'a':
   case 'A':
    {
    area= PI* radious* radious ;
    printf("\n\r area = %f ",area);
    }
    break;
   case 'c':
   case 'C':
   {
    circumfrence= 2*PI* radious;
    printf("\n\rcircum = %f ",circumfrence );
   }
    break;
   default :
   {
       printf(" \n\r wrong choice\n\r");

   }
    break;
   }

return 0 ;*/



    /*
   // program to find the largest number bet 3 numbers
   int a , b, c ;
   printf("please enter 3 numbers :");
   scanf("%d %d %d",&a,&b,&c);

   if (a>b)
    {
        if (a>c)
        {
            printf("the largest number is %d",a);

        }
    else
        printf("the largest number is %d",c);
   }
   else
    {
        if(b>c)
        {
              printf("the largest number is %d",b);

        }
      printf("the largest number is %d",c);
   }

*/

/*=============================================================*/


   /* int radious ;
    float area , circumfrence ;
    char choice ;

    printf("please enter the circle radious : \r\n  ");
    scanf("%f",&radious);
    printf("please choose A for print area \r\n and B for print circum.:   ");
    choice=getche();
    if (choice=='A')
    {
     area= PI* radious* radious ;
    printf("\n\rarea = %f ",area );

    }
    else if (choice=='B')
    {
        circumfrence= 2*PI* radious;
        printf("\n\rcircum = %f ",circumfrence );


    }
    else
    {
       printf("wrong choice ");

    }

return 0 ;


*/

/*=============================================================*/


/*

//conditions
int a = 9;
int b = 8;
int c = 12;
printf("%d\r\n", a>b); //prints 1
printf("%d\r\n", b>c); //prints 0
printf("%d\r\n", a<=9); //prints 1
printf("%d\r\n", a!=9); //prints 0
printf("%d\r\n", (a-b)>(c-b)); //prints 0
printf("%d\r\n", a>b && c>b); //prints 1
printf("%d\r\n", a>b && c<b); //prints 0
printf("%d\r\n", a>b || c<b); //prints 1
printf("%d\r\n", !(a<b)); //prints 1
printf("%d\r\n", 3 && 0); //prints 0
printf("%d\r\n", -15 || 0); //prints 1
printf("%d\r\n", !(-15)); //prints 0
*/





/*=============================================================*/

    /*int area,hight , width ;
printf("please enter hight and width:\r\n");
scanf("%d %d",&width , &hight );

area=hight*width ;

printf("area = %d",area);

return 0;


*/
// printing hexadecimal number
/*
int x =160 ;
int y =0x2FCA ;
printf("x y in decimal x=%d and y= %d \r\n ",x ,y ) ;
printf("x y in hexadecimal  x= %X  and y= %X \r\n  ",x,y);
*/
/*
int radious = 5 ;
double area ;
 area== 3.14 * radious*radious ;

printf("area = %d \r\n ",area);*/
/*
float linelength =200;
float slope = 0.30 ;
printf("herozontal projection %f \r\n)", linelength*cos(slope) );
*/

/*=============================================================*/

/*int i = 0, flag = 0;
int a[10] = { 0, 1, 4, 6, 89, 54, 78, 25, 635, 500 };
//This loop is repeated until the condition is false.Material from Interview Mantra. Subscribe to free updates via email.
while (flag == 0) {
if (a[i] == 54) {
//as element is found, flag = 1,the loop terminates
flag = 1;
}
else {
i++;
}
}
printf("Element found at %d th location", i);

return 0;*/





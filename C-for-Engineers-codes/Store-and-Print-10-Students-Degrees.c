
#include "stdio.h"
void main()
{
 int i;
 float degrees[10];
//Scanning students degrees and storing them in array
 for(i=0; i<10; i++)
    {
       printf("\r\nEnter student %d degree : ", i+1);
      scanf("%f", &degrees[i]);
     }
//Printing all students degrees
    for(i=0; i<10; i++)
     {
      printf("\r\nStudent %d degree is %f",
      i+1, degrees[i]);
     }
}
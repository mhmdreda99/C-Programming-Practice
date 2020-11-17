/**
 * @file Max-of-array.c
 * @author Mohamed Reda 
 * @brief  example finds the maximum value in array of size 10.
 * @version 0.1
 * @date 2020-11-17
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "stdio.h"
int main()
{

   int i;
   float degrees[] = {75.5, 88.0, 89.5, 23.5, 72.0,63.5, 57.5, 62.0, 13.5, 46.5};
   float max;
   max = degrees[0];

   for(int i =0 ; i<10;i++)
   {
      if (max<degrees[i])
      {
         max=degrees[i];
      }
      
   }
printf("the maximum element of degrees is %f : ", max); 

return 0 ;
}

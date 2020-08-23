#include <stdio.h>
#include <stdlib.h>
  double FrancsToEuro (double francs)
{
    return francs*6.55957;
}


int main()
{
    double francs=0,euro=0;
   printf("Please, enter the value of francs to be converted \n");
   scanf("%1f",&francs);
   euro=FrancsToEuro(francs);
   printf("The %f of francs = %f euros",francs,euro);
   return 0;
}




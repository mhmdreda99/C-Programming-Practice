#include <stdio.h>
#include <stdlib.h>
void Diversion(int*hours,int*mins ,int*secs);
int main()
{
    int min=0,hours=0,seconds=0;
    printf("Please enter number of mins \n");
    scanf("%d",&min);
    Diversion(&hours,&min,&seconds);
    printf("Hours=%d, Minuits=%d, Seconds=%d",hours,min,seconds);
    return 0;
}
void Diversion(int*hours, int*mins, int*secs)
{
    *hours=*mins/60;
    *mins=*mins%60;
    int x=*mins%60;
    *secs=x/60;
}

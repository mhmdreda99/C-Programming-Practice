#include <stdio.h>
#include <stdlib.h>
int NO_Gaps(int); 
int main()
{

  int num ; // stores user input
  printf("please ENTER NUMPER :\n");
  scanf("%d",&num);
  printf("Number OF Gaps= %d \n ",NO_Gaps(num));

  return 0 ;




}
int NO_Gaps(int num ){

int MaxGaps=0; 
int  counter =0 ;
int i,temp ;

if(num== 0 || num == 1 || num ==0xff ) {
    return -1 ;

}

for(i=0;(sizeof(int)*8);i++){
    temp=((num>>i)&1);
    if(temp==1)
    {
        if(counter>=MaxGaps ){
            MaxGaps=counter ;
        }
    }

      if(temp==0)
        counter++ ;
return MaxGaps ;
}





}

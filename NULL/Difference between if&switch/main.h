void tablemax(int table[],int tablesize,int maxvalue)
{
    for (int i=0;i<tablesize;i++)
     {

      if (table[i]>maxvalue)
    {

     table[i]=0;
       printf("%d \n",table[i]);
    }  }



}

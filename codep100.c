#include <stdio.h>

int main()
{
    long N,r,t=1,bin=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%10;
       N=N/10;
       bin=bin+(r*t);
      t=t*2;
      
   }
   printf("%X",bin);
    return 0;
}

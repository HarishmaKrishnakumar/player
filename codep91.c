#include <stdio.h>

int main()
{
    long N,r,t=1,bin=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%2;
       N=N/2;
       bin=bin+(r*t);
      t=t*10;
      
   }
   printf("%ld",bin);
    return 0;
}

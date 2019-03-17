#include <stdio.h>

int main()
{
    int N,r,t=1,bin=0,c=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%2;
        
         N=N/2;
       bin=bin+(r*t);
      t=t*10;
      
    }
while(bin)
   {
       c++;
       r=bin%10;
       if(r==1)
       {
    printf("%d",c);
           break;
       }
        bin=bin/10;
        }  
        return 0;
}

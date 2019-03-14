#include <stdio.h>

int main()
{
    int N,r,bin=0,t=1,c=0;
 scanf("%d",&N);
 while(N)
 {
     r=N%2;
     N=N/2;
     c++;
     bin=bin+(r*t);
     t=t*10;
     
    }

if(N==0)
printf("1");
else
printf("%d",c);
    return 0;
}

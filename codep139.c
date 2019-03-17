#include <stdio.h>

int main()
{
    int N,r,t=1,bin=0,c;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%2;
        if(r==1)
        {
            c++;
        }
         N=N/2;
       bin=bin+(r*t);
      t=t*10;
      
    }
	printf("%d",c);
    return 0;
}

#include <stdio.h>

int main()
{
    int N1,N2,i,j,fact1=1,fact2=1;
    
    scanf("%d %d",&N1,&N2);
    
    for(i=1;i<=N1;i++)
    {
        fact1=fact1*i;
    }
    for(j=1;j<=N2;j++)
    {
        fact2=fact2*j;
    }
    
    printf("%d",fact1/fact2);


    return 0;
}

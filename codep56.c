#include <stdio.h>
#include<string.h>

int main()
{

char S[100],K;
int i,l;
scanf("%s %c",S,&K);
for(i=1;S[i]!=NULL;i++)
{
    if(S[i]==K)
    {
        printf("%d",i+1);
    }

  
}


    return 0;
}

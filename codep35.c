#include <stdio.h>
#include<string.h>

int main()
{
    
        char S1[1000];
    int i,j,c=0;
    scanf("%[^\n]s",S1);
    for(i=0;S1[i]!=NULL;i++)
    {
        c=0;
    for(j=i+1;S1[j]!=NULL;j++)
    {
        if(S1[i]==S1[j] )  
        {
         c++;
         S1[j]='*';
        }
    }
    if(c==0)
    {
        if(S1[i]!=' ' && S1[i]!='*')
        {
        printf("%c ",S1[i]);
        }
    }
    }

    return 0;
}

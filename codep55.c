#include <stdio.h>

int main()
{
    
    char S1[1000],S2[1000];
    int c1=0,c2=0,i,count=0;
    scanf("%s %s",S1,S2);
    for(i=0;S1[i]!=NULL;i++)
    {
        c1++;
    }
    for(i=0;S2[i]!=NULL;i++)
    {
        c2++;
    }
    if(c1==c2)
    {
    for(i=0;i<c1;i++)
    {
        if(S1[i]==S2[i] || S1[i]+32==S2[i] ||S1[i]-32==S2[i] || S1[i]==S2[i]+32 ||S1[i]==S2[i]-32)
        {
            count++;
        }
    }
    if(count==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
    return 0;
}

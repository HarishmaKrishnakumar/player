#include <stdio.h>
#include<string.h>

int main()
{
    
char S1[1000],S2[1000];
int i,j,l1,l2,c=0;
scanf("%s %s",S1,S2);
l1=strlen(S1);
l2=strlen(S2);
for(i=l1-l2;i<l1;i++)
{
for(j=0;j<l2;j++)
{

        if(S1[i]==S2[j])
        {
            c++;
        }
}
}
if(c==l2)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}

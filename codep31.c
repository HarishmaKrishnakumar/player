#include <stdio.h>
#include <string.h>

int main()
{
int i,x;
char Str[10000];
scanf("%s",Str);

for(i=0;Str[i]!=NULL;i++)
{
    
    
    if(Str[i]=='(')
    {
     x++;
    }
    else if(Str[i]==')')
    {
    x--;    
    }
  }
 if(x==0)
 printf("yes");
 else
 printf("no");



    return 0;
}

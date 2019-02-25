#include <stdio.h>
#include <string.h>

int main()
{
  char S[50];
  int i,j,k,x;
  scanf("%[^\n]s",S);
  for(i=0;S[i]!='\0';i++)
  {
      if(S[i]==' ' && S[i+1]==' ')
      {
         k=i+2;
         x=i;
         for(j=k;S[j]!=NULL;j++)
         {
             S[x]=S[j];
             x++;
         }
         S[x]='\0';
         break;
      }
  }
  printf("%s",S);
    
	return 0;
}

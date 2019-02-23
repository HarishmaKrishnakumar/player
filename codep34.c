#include <stdio.h>
#include<string.h>

int main()
{
  int l,i;
  char s[100];
  scanf("%s",s);
  l=strlen(s);
 
   for(i=0;i<l;i=i+3)
   {
     printf("%c",s[i]);  
   }
   

return 0;  
  
}

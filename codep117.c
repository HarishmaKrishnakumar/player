#include <stdio.h>

int main()
{
   char s1[10000],s2[10000];
  int k=0,i,l;
  scanf("%s",s1);
  l=strlen(s1);
  for(i=l-1;i>=0;i--)
  {
     s2[k]=s1[i];
     k++;
    
  }
     for(i=0;s2[i]!='\0';i++)
  {
      
      if(s2[i+1]!='\0')
        printf("%c-",s2[i]);
           else
    printf("%c",a[i]);  
  }
    return 0;
}

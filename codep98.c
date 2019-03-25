#include <stdio.h>


int main()
{
  
  char str[100000],K;
    int i,l,c=0;
    scanf("%s",str);
    scanf("%c",&K);
    l=strlen(str);
  
    for(i=0;i<l-1;i++) 
     {
       if(str[i]>='0' && str[i]<=K)
         {    
             c++;
         }
  
       }
       
     if(l-1==c)
     {
        printf("yes");
     }
    else
    {
         printf("no");
    }
    return 0;
}

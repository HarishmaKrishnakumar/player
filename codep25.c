#include <stdio.h>

int main()
{
    int N,i,c,k=0,b[10],m,j,t;
  char a[10][10];
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      
      scanf("%s",&a[i]);
      
  }
  
   for(i=0;i<N;i++)
  {
    
    
    
c=strlen(a[i]);
      
 b[k]=l;
      k++;
  }
  
  
 
   for(i=0;i<N;i++)
  {
  for(j=i+1;j<N;j++)
   {
       if(b[i]>b[j])
       {
           
           
           t=b[i];
           b[i]=b[j];
           b[j]=t;
           
       }
       
       
   }
  }
  
for(i=0;i<N;i++)
  {
      
      
      for(j=0;j<N;j++)
      {
          
          if(b[i]==strlen(a[j]))
          printf("%s ",a[j]);
      }
  }
    return 0;
}

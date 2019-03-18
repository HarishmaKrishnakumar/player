#include <stdio.h>


int main()
{
    int N,i,j,sum=0,k;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
  
  
 
  
for(i=0;i<N;i++)
   {
       
       
  
    sum=sum+a[i];
    
    if(sum%2==0)
    printf("%d ",sum);
    else
      printf("%d ",sum);
       
}
  
return 0;
}

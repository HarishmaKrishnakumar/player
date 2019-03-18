#include <stdio.h>


int main()
{
    int N,i,j,sum=1,k;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
  
  
 
  for(i=0;i<N;i++)
   {
        sum=sum*a[i];
       
   }
    if(sum%2==0)
    printf("even");
    else
      printf("odd");
  
return 0;
}

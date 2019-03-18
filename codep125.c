#include <stdio.h>


int main()
{
    int N,i,j,f=0,k;
scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}
  
  
 
  
for(i=1;i<=N;i++)
{
    f=0;
    for(j=0;j<N;j++)
    {
        
        if(a[j]%i==0)
        {
           f++;
        }
      
    }
    
    if(f==N)
    {
    k=i;
   
    }
}
  
  
  
  printf("%d",k);
  
return 0;
}

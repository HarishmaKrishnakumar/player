#include <stdio.h>

int main()
{
    int N,M,a[100000],b[10000],c[100000],i,j,k=0,f;
   scanf("%d %d",&N,&M);
 for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
       c[k]=a[i];
       k++;
   }
      for(i=0;i<M;i++)
   {
       scanf("%d",&b[i]);
       c[k]=b[i];
       k++;
   }
       for(i=0;i<k;i++)
   { 
   for(j=i;j<k;j++)
   {
   if(c[i]>c[j] && c[i]==c[j])
   {
       f=c[i];
       c[i]=c[j];
       c[j]=f;    
   }
   }
   }
       for(i=0;i<k;i++)
   {
       printf("%d ",c[i]);
   }
  
    return 0;
}

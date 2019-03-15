#include <stdio.h>

int main()
{
    int N,K=0;
	scanf("%d ",&N);
	int a[N],i,j;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);
	}
 for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
      if(a[i]<a[j])
      K++;
       
   }
   
   }
   printf("%d",K);

    return 0;
}

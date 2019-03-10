#include <stdio.h>

int main()
{
    int N,M,a[100000],i,j,max,f;
   scanf("%d",&N);
 for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
       M=a[j]-a[i];
		f=a[i]-a[j];
		if(M>max)
		{
			max=M;
		}
		if(f>max)
		{
			max=f;
		}
	}
	}
	printf("%d",max);
    return 0;
}

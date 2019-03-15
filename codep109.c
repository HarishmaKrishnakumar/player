#include <stdio.h>

int main()
{
    int N;
	scanf("%d",&N);
	int a[N],i,j,sum;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<N;i++)
	{
		 sum=0;
		for(j=i;j<N;j++)
		{
			sum=sum+a[j];
		
		}
		printf("%d ",sum);
		}
	
    return 0;
}

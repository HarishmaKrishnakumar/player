#include <stdio.h>

int main()
{
    	int N,K, i,j,f=0;
	scanf("%d %d",&N,&K);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-K;i++)
	{
			printf("%d ",a[i]);
	}


    return 0;
}

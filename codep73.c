#include <stdio.h>

int main()
{
    int N,K;
	scanf("%d %d",&N,&K);
	int a[N],i;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		if(a[i]==K)
		{
			printf("%d",i+1);
			break;
		}
	}
    return 0;
}

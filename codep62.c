#include <stdio.h>

int main()
{
    int N,i,j,K;
	scanf("%d",&N);
for(i=1;i<=N;i++)
	{
		K=N/i;
		if((K%2)!=0)
		{
			printf("%d",i);
			break;
		}
	}
    return 0;
}

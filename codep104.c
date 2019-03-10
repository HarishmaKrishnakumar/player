#include <stdio.h>

int main()
{
    int N,t,i,sum=0;
	scanf("%d",&N);
	int a[N];

	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		sum=sum+(a[i]+a[i+1]);
	}
	printf("%d",sum);
    return 0;
}

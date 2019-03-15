#include <stdio.h>

int main()
{
int N,sum=0;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=N;i>=1;i--)
	{
		sum=sum+i;
	}
	printf("%d",sum);
    return 0;
}

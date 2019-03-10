#include <stdio.h>

int main()
{
    int N,i,c=1,j;
    scanf("%d ",&N);
   int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<N;i++)
	{
		if(a[i+1]>a[i])
		{
			c=c+1;
		}
		else
		{
			break;
		}
	}
	printf("%d",c);
    return 0;
}

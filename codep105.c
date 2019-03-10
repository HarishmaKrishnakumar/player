#include <stdio.h>

int main()
{
    int N,t,i;
	scanf("%d",&N);
	int a[N],b[N];

	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		b[i]=a[i];
	}
	
	for(i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			 t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	
	}
	for(i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",j+1);
			}
		}
	}

    return 0;
}

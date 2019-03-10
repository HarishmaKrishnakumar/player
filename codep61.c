#include <stdio.h>

int main()
{
    	int N,X, i,j,f=0;;
	scanf("%d %d",&N,&X);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]+a[j]==X)
			{
				
				f=1;
				break;
			}
			
		}
	}
	if(f==1)
	{
			printf("yes");
	}
	else
	printf("no");

    return 0;
}

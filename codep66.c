#include <stdio.h>

int main()
{
    int N,i,c=0,j,K;
    scanf("%d %d",&N,&K);
   int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
				
			}
		}
		if(c==K)
		{
			printf("%d",a[i]);
			break;
		}
	}
    return 0;
}

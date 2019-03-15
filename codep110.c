#include <stdio.h>

int main()
{
    int N;
	scanf("%d",&N);
	int a[N],i,j,sum,s1,s2;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<N;i++)
	{
		 s1=0;s2=0;
		for(j=i;j<N;j++)
		{
			s1=s1+a[j];
		
		}
		for(int j=0;j<i+1;j++)
		{
			s2=s2+a[j];	
		}
		sum=s1+s2;
		printf("%d ",sum);
		}
	
    return 0;
}

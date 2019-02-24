#include <stdio.h>

int main()
{
    int N,K,i,f=0,x=1;
	scanf("%d %d",&N,&K);

	for(i=0;i<N;i++)
	{
		x=K*x;
		if(x==N)
		{
			f=1;
		 break;
		}
	}
	if(f==0)
	printf("no");
	else
		printf("yes");
    return 0;
}

#include <stdio.h>

int main()
{
    	int N,i;
	scanf("%d",&N);
	int flag=1;
for(i=1;i<=N/2;i++)
{
    flag=i*2;
}
	if(flag!=N)
	{
		printf("no");
	}
	else
	{
	    printf("yes");
	}
	
    return 0;
}

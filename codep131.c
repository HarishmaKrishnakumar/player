#include <stdio.h>

int main()
{
    int N,sum=0,r;
scanf("%d",&N);

while(N!=0)
	{
		r=N%10;
		if(r%2!=0)
		{
			sum=sum+r;
		}
		N=N/10;
	}
	if(sum%2!=0)
	{
		printf("O");
	}
	else
	{
		printf("E");
	}

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
int N,K;
	scanf("%d %d",&N,&K);
	int i,X,l=0;
	while(N>0)
	{
		X=N%10;
		if(X==K)
		{
			l+=1;
		}
		N=N/10;
	}
	printf("%d",l);
	return 0;
}

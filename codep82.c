#include <stdio.h>
int main()
{
    int N,i,j,max,f;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			f=((a[i])&(a[j]));
		}
	}
	printf("%d",f);
    return 0;
}

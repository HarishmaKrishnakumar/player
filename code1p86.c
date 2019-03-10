#include <stdio.h>
int main()
{
    int N,i,j,f=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
	{
		f=f^a[i];
	}
	printf("%d",f);

    return 0;
}

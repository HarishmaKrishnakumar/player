#include <stdio.h>

int main()
{
    int N,a[100000],f,f1,c=0,c1=0,i;
   scanf("%d",&N);
 for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
	{
		if(a[i]%2!=0)
		{
			c=c+1;
			f=a[i];
		}
		else
		{
			c1=c1+1;
			f1=a[i];
		}
	}
	if(c==1)
		{
			printf("%d",f);
		}
		if(c1==1)
		{
			printf("%d",f1);
		}
    return 0;
}

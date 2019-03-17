#include <stdio.h>

int main()
{
    	int N,l,r,i,j,m;
	scanf("%d %d %d",&N,&l,&r);
	int a[N];
	for( i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
m=a[l-1];
      for(i=l;i<r;i++)
   {
   if(m>a[i])
   {
       m=a[i];
       
   }
   }
   printf("%d ",m);
       
    return 0;
}

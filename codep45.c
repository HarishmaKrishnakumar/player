#include <stdio.h>
#include<math.h>

int main()
{
int P,A,i,j,x,y,l=0;
	scanf("%d %d",&P,&A);
	for(i=1;i<=P;i++)
	{
	    for(j=1;j<=A;j++)
	{
	    x=2*(i+j);
	    y=i*j;
	    if(x==P && y==A)
	    {
	        
	        l++;
	       
	        break;
	    }
	}

	}
	if(l==0)
	{
	    printf("no");
	}else
	{
	 printf("yes");
	}


    return 0;
}

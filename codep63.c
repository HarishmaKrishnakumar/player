#include <stdio.h>

int main()
{
    int N,i,c,j;
    scanf("%d ",&N);
   int a[N],b[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<N;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
for(i=0;i<N;i++)
 {
     for(j=0;j<N;j++)
 { 
    if(a[i]==b[j])
     {
         
         printf("%d ",a[i]);
     
     break;
         
     }   
 }
 

 
 }
    return 0;
}

#include <stdio.h>

int main()
{
    int N,i,c,j,k=1;
    scanf("%d",&N);
   int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
      if(a[i]>a[j]||a[i]<a[j])
      {
    c=abs(a[i]-a[j]);
  
       if(k>c)
          k=c;
       
   }
   
}
       
   }
    printf("%d",k);
    return 0;
}

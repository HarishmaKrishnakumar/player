#include <stdio.h>

int main()
{
    int N,K,i,a=1,count,b=1,c=1;
  scanf("%d %d",&N,&K);
  count=N-K;
  for(i=1;i<=N;i++)
  {
      a=a*i;
  }
    for(i=1;i<=count;i++)
  {
      b=b*i;
  }
for(i=1;i<=K;i++)
  {
      c=c*i;
  }
  
  

  printf("%d",(a/(b*c)));  

    return 0;
}

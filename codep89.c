#include <stdio.h>

int main()
{
    int N,K,i,a=1,count,b=1;
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


  printf("%d",(a/(b)));
  

    return 0;
}

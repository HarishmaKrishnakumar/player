#include <stdio.h>
int main()
{
    int N,i,c=1;
 scanf("%d",&N);
 for(i=1;i<=N;i++)
 {
  c*=i;   
 }
 printf("%d",c);
    return 0;
}

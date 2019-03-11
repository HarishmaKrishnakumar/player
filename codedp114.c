#include <stdio.h>

int main()
{
  int A,B,C,s;
scanf("%d %d %d",&A,&B,&C);

s=pow(A,B);
printf("%d",s%C);
    return 0;
}

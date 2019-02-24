#include <stdio.h>
#include<math.h>

int main()
{
    float pi=3.14,ans,x;
    int A;
	scanf("%d",&A);
  x=A*pi;
	ans=sin(x/180);
	printf("%.1f",ans);
    return 0;
}

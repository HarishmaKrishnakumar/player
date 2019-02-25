#include <stdio.h>

int main()
{
int A,B,C,a1;
   scanf("%d%d%d",&A,&B,&C);
   if(A>0&&B>0&&C>0)
   {
       a1=A+B+C;
       if(a1==180)
       printf("yes");
       else
       printf("no");
      }
   else
   printf("no");
    return 0;
}

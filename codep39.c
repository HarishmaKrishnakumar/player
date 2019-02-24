#include <stdio.h>

int main()
{
    int N;
    int f=0;
     scanf("%d",&N);
   while(N!=1)
    {
        if(N%2!=0){
            f=1;
            break;
        }
        N=N/2;
    }
  
    if(f==0)
        printf("yes");
    else
        printf("no");
    return 0;
}

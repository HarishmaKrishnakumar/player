#include <stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        if(N%i==0)
        {
            if(i%2==0)
            printf("%d ",i);
        }
    }
    return 0;
}

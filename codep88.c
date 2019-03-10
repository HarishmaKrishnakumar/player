#include <stdio.h>
int main()
{
    int N,K;
    scanf("%d%d",&N,&K);

    printf("%d",N>>K);

    return 0;
}

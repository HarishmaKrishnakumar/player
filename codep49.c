#include <stdio.h>
#include<math.h>

int main()
{

int N;
scanf("%d",&N);

if(N>=-32,768 && N<= 32,767  || N>=-2,147,483,648 && N<=2,147,483,647)
{
    printf("INT");
}
else
{
    printf("LONG");
}


    return 0;
}

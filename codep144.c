#include <stdio.h>


int main()
{

   int arr[100],N,i;
scanf("%d",&N);
for(i=0;i<N;i++)
{
    scanf("%d",&arr[i]);
}

for(i=1;i<N;i++)
{
 
if((arr[i]%arr[i-1])==0)
{
    printf("%d ",arr[i]);
    
    
}
}
    return 0;
}

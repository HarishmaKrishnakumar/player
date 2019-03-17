#include <stdio.h>

int main()
{
    int N,k,flag=0,i;
    scanf("%d %d",&N,&k);
    int a[N];
   for(i=0;i<N;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<N;i++)
{
    if(a[i]==k)
    {
        
        flag++;
        
    }
    
}
if(flag==0)
{
printf("no");
}
else
{
printf("yes %d",flag);
}



        return 0;
}

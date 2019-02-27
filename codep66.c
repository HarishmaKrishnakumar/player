#include <stdio.h>

int main()
{
    int N,j,i,c,K,t=0;
    scanf("%d%d",&N,&K);
    int a[N],b[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    c=0;
    t=0;
for(i=0;i<N;i++)
{
    for(j=i+1;j<N;j++)
    {
        if(b[i]==b[j])
        {
         c++;  
        t=1;
         b[j]='\0';
         
        }
    }
    if(t==0)
    {
     b[i]='\0';
    }
    
}

for(i=0;i<c;i++)
{
    if(b[i]!='\0' && c==K)
    printf("%d",b[i]);
}

    return 0;
}

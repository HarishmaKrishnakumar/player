#include <stdio.h>

int main()
{
    int N,j,i,t,c;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    c=0;
    for(i=0;i<N;i++)
    {
        if(a[i]<N)
        {
            b[j]=a[i];
            j++;
            c++;
        }
    }
    
for(i=0;i<c;i++)
{
    for(j=i;j<c;j++)
    {
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
    
}
for(i=0;i<c;i++)
{
    printf("%d ",b[i]);
}
    return 0;
}

#include <stdio.h>

int main()
{
    int N,i,j,k,c,l=0,c1=0,t=1;
    scanf("%d %d",&N,&k);
    int a[N],b[N];
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++)
    {
        c=1;
        for(j=i+1;j<N;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
                a[j]='*';
            }
        }
        if(c<k && a[i]!='*')
        {
            b[l]=a[i];
            l++;
            c1++;
        }
    }
    for(i=0;i<c1;i++)
    {
        for(j=i+1;j<c1;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=0;i<c1;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}

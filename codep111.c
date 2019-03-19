
#include<stdio.h>
void main(){
    long int a[100000],b[100000],c[100000];
    int N,M,t,i,j,l=0;
    scanf("%d %d",&N,&M);
    
    for(i=0;i<N;i++)
    {
    scanf("%ld",&a[i]);
    }
     for(i=0;i<M;i++)
     {
  scanf("%ld",&b[i]);
     }

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                b[j]='*';
                l++;
                break;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
        printf("%ld ",c[i]);
    }
return 0;
}

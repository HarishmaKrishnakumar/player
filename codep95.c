#include <stdio.h>

int main()
{
    int N,P,k,i=0,j,a,arr[10000],c=0,q,arr1[100000],b=0;
    scanf("%d %d %d",&N,&P,&k);
    a=N;
    while(a)
    {
        q=a%10;
        arr[i]=q;
        i++;
        a=a/10;
        c++;
    }
    
    for(j=c;j>0;j--)
    {
      arr1[b]=arr[j];
      b++;
        
    }
    
 printf("%d",arr1[P+k]);
    
    return 0;
}

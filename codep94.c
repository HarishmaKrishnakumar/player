#include <stdio.h>

int main()
{int N,rem,i,a[1000],j,k,c=0;
    scanf("%d",&N);
    while(N)
    {
        
        rem=N%10;
        a[k]=rem;
        N=N/10;
        k++;

    }
    
    
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                
                c++;
            }
            
        }
    }
    
    
    if(c!=0)
    printf("yes");
    else
    printf("no");
    return 0;
}

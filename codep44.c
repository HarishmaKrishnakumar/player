#include <stdio.h>
#include<string.h>

int main()
{
  char S[100],b;
    int N,i,j,l=0;
    scanf("%s",S);
    scanf("%d",&N);
    for(i=0;S[i]!=NULL;i++)
    l++;
    for(i=1;i<=N;i++)
    {
        b=S[l-1];
       for(j=l-2;j>=0;j--)
 	{
	   S[j+1]=S[j];
	}
	    S[0]=b;
        }
    printf("%s",S);

    return 0;
}

#include <stdio.h>

int main()
{
char S[100],k;
	scanf("%s %c",S,&k);
	int i,c=0;
	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]==k)
		{
			c+=1;
		}
	}
	printf("%d",c);
    return 0;
}

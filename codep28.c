#include <stdio.h>
#include<string.h>

int main()
{
    
char S[1000000];
	int i,L;
	scanf("%[^\n]",S);
	L=strlen(S);
	for(i=0;i<L;i++)
	{
		if(S[i]==' ')
		{
			S[i]='*';
		}
	}
	for(i=0;i<L;i++)
	{
	if(S[i]!='*')
	{
	printf("%c",S[i]);
	}
	}
    return 0;
}

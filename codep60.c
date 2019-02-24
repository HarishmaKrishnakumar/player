#include <stdio.h>
#include<string.h>

int main()
{
	char S1[15],S2[15];
	scanf("%s %s",S1,S2);
	int i,j,flag=0;
	for(i=0;S1[i]!='\0';i++)
	{
		for(j=0;S2[j]!='\0';j++)
		{
			if(S1[i]==S2[j])
			{
				flag=1;
				break;
			}
			
	}
		if(flag==1)
		{
			printf("yes");
			break;
		}
		
		
	}
	if(flag==0)
	{
		printf("no");
	}


    return 0;
}

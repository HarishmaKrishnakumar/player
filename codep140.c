#include <stdio.h>

int main()
{
    char S[1000000];
    int i,flag=1;
    scanf("%s",S);
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]=='a'  || S[i]=='b')
        {
            flag++;
        }
        else
        {
            flag=0;
            break;
        }
    }
	if(flag==0)
	{
		printf("no");
	}
	else
	{
	    printf("yes");
	}
	
    return 0;
}

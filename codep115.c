#include <stdio.h>

int main()
{
char s1[100];
	char s2[100],s3[100];
	scanf("%s",s1);
	scanf("%s",s2);
	int l1,l2, i,j,k;
	l1=strlen(s1);
	l2=strlen(s2);
	
	if(l1!=l2)
	{
		for(i=0;i<l2;i++)
		{
			s3[i]=s1[i];
		}
	}
	k=0;
	for(j=i;j<(l2+l1);j++)
	{
	    
		s3[j]=s2[k];
		k++;
	}
	printf("%s",s3);
    return 0;
}

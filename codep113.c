#include <stdio.h>

int main()
{
    char date[1000];
    scanf("%s",date);
    int flag;
   
        if(date[0]<='3' && date[1]<'10' && date[2]=='/' && date[3]<'2' && date[4]<'3' && date[5]=='/' && date[6]<'10' && date[7]<'10' && date[8]<'10' && date[9]<'10'&&date[10]=='\0')
{
    flag=1;
}
else
{
    flag=0;
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

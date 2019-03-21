#include <stdio.h>

int main()
{
    int N;
scanf("%d",&N);
int arr[100][100],i,j,c1=0;
for(i=1;i<=N;i++)
{
    for(j=1;j<=N;j++)
    {
         scanf("%d",&arr[i][j]);  
        
    }
    
}
for(i=0;i<=N;i++)
{
    for(j=0;j<=N;j++)
    {
      if(arr[i][j]==1)
      {
          if(arr[i-1][j]==0&&arr[i][j-1]==0&&arr[i][j+1]==0&&arr[i+1][j]==0)
       
          {
              c1++;
              
          }
          } 
        
    }
}
    
    printf("%d",c1);
    return 0;
}

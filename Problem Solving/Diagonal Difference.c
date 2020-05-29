#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j,i,n;
    int sum2 = 0;
    int arr[101][101];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
   scanf("%d ",&arr[i][j]);
    }}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]<-100||arr[i][j]>100){
                return 0;
            }
        }
    }
  int sum1=0;
  for(i=0;i<n;i++){
      for(j=i;j<=i;j++)
      {
          sum1=sum1+arr[i][j];
      }
  }
 
  for(i=0;i<n;i++){
      for(j=n-1-i;j<=n-1-i;j++)
      {
          sum2=sum2+arr[i][j];
      }
  }

int diff = sum1 - sum2;
int sub=abs(diff);
printf("%d",sub);
return 0;
}


#include<stdio.h>
int main()
{
    int n,i;
    int a[1000];
    scanf("%d",&n);
    if(n<0)
    {
        return 0;
    }
    
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
    if(a[i]>1000){
        return 0;
    }}
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        }
  printf("%d",sum);
return 0;
}

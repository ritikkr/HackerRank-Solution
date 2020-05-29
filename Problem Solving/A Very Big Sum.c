#include<stdio.h>
int main()
{
    int n,i;
    long long int a[10];
 scanf("%d",&n);
 if(n<1||n>10){
     return 0;
 }

 for(i=0;i<n;i++)
 {
     scanf("%llu",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     if(a[i]<0||a[i]>10000000000){
         return 0;
     }
 }
long long sum=0;
for(i=0;i<n;i++)
{
    sum =sum+a[i];

}
printf("%llu",sum);
}

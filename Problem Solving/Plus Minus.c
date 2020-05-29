#include<stdio.h>
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    if(n<0||n>100){
        return 0;
    }
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if(a[i]<-100||a[i]>100){
        return 0;
    }
}
float count_1=0;
for(i=0;i<n;i++){
    if(a[i]>0){
        count_1++;
    }
   
}
float count_2= 0;
for (i = 0; i < n; i++) {
  if (a[i] < 0) {
    count_2++;
  }
}

float count = 0;
for (i = 0; i < n; i++) {
  if (a[i] == 0) {
    count++;
  }
}

float posf;
posf=count_1/n;
printf("%.6f\n",posf);
float negf;
negf = count_2 / n;
printf("%.6f\n", negf);
float zerof;
zerof = count / n;
printf("%.6f\n", zerof);
}

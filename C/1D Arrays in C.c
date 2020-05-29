#include<stdio.h>
int main(){
    int i ,n;
    scanf("%d",&n);
    if(n<1||n>1000){
        return 0;
    }
    int *p;
    p=(int*)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
scanf("%d",(p+i));
    }
  
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    printf("%d",sum);
return 0;
}

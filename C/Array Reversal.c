#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,arr[1000];
    scanf("%d",&num);
    if(num<1||num>1000){
        return 0;
    }
    int i;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < num; i++) {
     if(arr[i]<1||arr[i]>1000){
         return 0;
     }
    }

    int b[1000];
    for(i=0;i<num;i++){
        b[i]=arr[num-i-1];
    
    }
    for(i=0;i<num;i++){
    printf("%d ",b[i]);
}
}


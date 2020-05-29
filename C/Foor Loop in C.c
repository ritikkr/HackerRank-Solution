#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
      if(b<9){
      
     if(a==1){
         printf("one\n");
     }if(a==2){
         printf("two\n");
     }
     if(a==3){
         printf("three\n");
     }
     if (a ==4) {
       printf("four\n");
     }
     if (a == 5) {
       printf("five\n");
     }
     if (a == 6) {
       printf("six\n");
     }
     if (a == 7) {
       printf("seven\n");
     }
     if (a == 8) {
       printf("eight\n");
     }
     if (a == 9) {
       printf("nine\n");
     }
     
     if (b == 1) {
       printf("one\n");
     }
     if (b == 2) {
       printf("two\n");
     }
     if (b == 3) {
       printf("three\n");
     }
     if (b == 4) {
       printf("four\n");
     }
     if (b == 5) {
       printf("five\n");
     }
     if (b == 6) {
       printf("six\n");
     }
     if (b == 7) {
       printf("seven\n");
     }
     if (b== 8) {
       printf("eight\n");
     }
     if (b == 9) {
       printf("nine\n");
     }
     }
     if(b>9){
     
if(a==1){
    printf("one\ntwo\nthree\nfour\nfive\nsix\nseven\neight\nnine\n");
}if(a==2){
    printf("two\nthree\nfour\nfive\nsix\nseven\neight\nnine\n");
}
if(a==3){
    printf("three\nfour\nfive\nsix\nseven\neight\nnine\n");
}
if(a==4){
    printf("four\nfive\nsix\nseven\neight\nnine\n");
}
if(a==5){
    printf("five\nsix\nseven\neight\nnine\n");
}
if(a==6){
    printf("six\nseven\neight\nnine\n");
}
if(a==7){
    printf("seven\neight\nnine\n");
}if(a==8){
    printf("eight\nnine\n");
}
for(i=b-9;i>0;i--){
    if((b-i+1)%2==0){
        printf("even\n");
    }
if((b-i+1)%2!=0){
    printf("odd\n");
}

    }
    
}


return 0;
}


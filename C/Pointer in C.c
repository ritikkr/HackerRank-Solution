#include <stdio.h>

void update(int *a,int *b) {
    int c;
    int sum=*a+*b;
  int diff=*a-*b;
  c=abs(diff);
    printf("%d\n",sum);
    printf("%d\n",c);

    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,r;
    int sum=0;
    scanf("%d", &n);
    while(n>0){
    
    r=n%10;
    sum=sum+r;
    n=n/10;
    
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float m,n;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&m,&n);

    int sum=0;int sub=0;
    float add=0; float subt=0;
	sum=x+y;
    printf("%d ",sum);
    sub=x-y;
    printf("%d\n",sub);
    add=m+n;
    printf("%.1f ",add);
    subt=m-n;
    printf("%.1f",subt);

    
    return 0;
}


#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
     int ans=0;
    if (d>c&& d> b &&  d>a)
    {
      ans=d;
      }
    else if (c> d &&c >b && c >a)
     { 
         ans=c;
     }
    else if (b>d && b > c && b> a)
    { 
        ans=b;
    }
    else
      ans=a;
      return ans;
    
  }

 int main() 
    {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);
  return 0;
    }
  

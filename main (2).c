#include <stdio.h>
int main()
    {
        int a, b, c;
        printf("enter the value of a:");
       scanf("%d",&a);
       printf("enter the value of b:");
       scanf("%d",&b);
       printf("enter the value of c:");
       scanf("%d",&c);
      if(a>=b && a>=c)
      printf(" the greaterst is %d ",a);
      else if(b>=a && b>=c)
      printf(" the greatest is %d ",b);
      else if(c>=a && c>=b)
      printf("the greatest is %d  ",c);
    return 0;
    }
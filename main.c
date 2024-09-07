#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value :");
    scanf("%d",&a);
    if(a==0)
        printf("There are positive or negative");
        else if(a>0)
            printf("The number is positive");
            else if(a<0)
                printf("the number is negative");
                else
                    printf("zero");
}
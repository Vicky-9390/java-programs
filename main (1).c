#include <stdio.h>
int main()
{
    printf("Enter the operators + - * / \n");
    int a , b, result;
    char operator;
    scanf("%c",&operator);
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Entert the value of B:");
    scanf("%d",&b);
    switch(operator)
    {
        case'+':
        result =a+b;
        printf("The addition  of two  number is:%d",result);
        break;
        case'-':
        result=a-b;
        printf("The subctraction  of two number is :%d",result);
        break;
        case'*':
        result=a*b;
        printf("The multplaction of two numbers :%d",result);
        break;
        case'/':
        if(b==0)
        printf("can't divid by zero");
        else
        result = a/b;
        printf("The divion of two numbers:%d",result);
        break;
    }
    
}
#include <stdio.h>

int main() {
    char op;
    int n1;
    int n2;
    scanf("%c\n%d\n%d", &op, &n1, &n2);
    // Don't change above this line
    
    // Write code here
    int res;
    if(op == '+'){
    res = n1+n2;
    }
    else if(op=='-'){
    res=n1-n2;
    }
    else if(op=='*'){
    res=n1*n2;
    }
    else{
    res=0;
    }
    // Don't change below this line
    printf("%d", res);
    return 0;
};
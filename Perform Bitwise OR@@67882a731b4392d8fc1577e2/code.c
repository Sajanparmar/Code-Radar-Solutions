#include <stdio.h>
int main() {
    int num1,num2,result;
    scanf("%d",&num1);
    scanf("%d",&num2);
    result = num1|num2;
    printf("%d | %d = %d\n",num1,num2,result);
    return 0;
}
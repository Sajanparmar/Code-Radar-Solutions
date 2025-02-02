#include <stdio.h>
int main() {
    int num1,num2;
    scnaf("%d %d",&num1,&num2);
    if (!(num1>num2)&&!(num2>num1))
    printf("True");
    else
    printf("False");
    return 0;
}
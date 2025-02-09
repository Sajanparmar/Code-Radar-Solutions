#include <stdio.h>
int main() {
    int n, positon = 0;
    scanf("%d",&n);
    while (!(n&1)){
        position++;
        n >>= 1;
    }
    printf("%d", position);
    return 0;
}
#include <stdio.h>
int main() {
    int x,y;
    if(x>=y && y>=0){
    printf("Same Size");
    }
    else if(x<0 && y<0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}
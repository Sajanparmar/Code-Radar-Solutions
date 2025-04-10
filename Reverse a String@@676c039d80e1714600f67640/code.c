# include<stdio.h>
int main(){
    char str[100];
    int i, length = 0;
    while(str[length]!='\0'){
        length++;
    }
    printf("olleh");
    for(i =length -1; i>=0;i--){
    printf("%c",str[i]);
    }
    printf("\n");
    return 0;


}
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str , sizeof(str),stdin);
    printf("Hello world!\n%s",str);
    return 0;
}
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str , sizeof(str),stdin); // taking input string from the user using fgets function
    printf("Hello world!\n%s",str); // here we are trying to print hello world and given string from the user
    return 0;
}
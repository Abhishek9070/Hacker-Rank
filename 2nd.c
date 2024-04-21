#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    scanf("\n");
    char s[100];
    scanf("%[^\n]*c",s);
    scanf("\n");
    char sen[100];
    scanf("%[^\n]*c",sen);
    printf("%c\n%s\n%s",c,s,sen);
    return 0;
}
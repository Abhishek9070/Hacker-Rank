/* WAP in which a sentence is given and you have to print each word in a new line.
input:My name is Abhishek
output:
My
name
is
Abhishek
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *s=malloc(1024*sizeof(char));
    printf("Enter your string:\n");
    scanf("%[^\n]s",s);
    s= realloc(s ,strlen(s)+1);
    int i=0;
    printf("String after breaking:\n");
    while(s[i]){
        while(s[i] == ' ')
        i++;
        while(s[i] && s[i]!=' '){
            printf("%c",s[i]);
            i++;
        }
        if(!s[i])
        break;
        printf("\n");
    }
    free(s);
    return 0;
}
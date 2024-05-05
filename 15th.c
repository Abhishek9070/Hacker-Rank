/*Given a string s including characters and numbers .
WAP to find the frequency of the numbers b/w 0to9 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char *s;
    s = malloc(1024*sizeof(char));
    scanf("%[^\n]s",s);
    s= realloc(s , strlen(s)+1);
    int frequency[10]={0};
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='0' && s[i]<='9'){
          frequency[s[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
    printf("%d ",frequency[i]);
    }
    return 0;
}
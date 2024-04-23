#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    char* num[]={"one","two","three","four","five"};
    if(n>=1 && n<=5){
        printf("%s\n",num[n-1]);
    }
    else{
        printf("Greater than 5");
    }
    return 0;
}
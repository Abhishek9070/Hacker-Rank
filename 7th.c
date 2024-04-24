/*we are  trying to write a program in C that takes two integers as input and prints out whether each number in the range between them 
 is odd or even, or if it's a single-digit number, prints out the corresponding word representation.
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your intervals:\n");
    scanf("%d%d",&a,&b);
    char* num[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i>=1 && i<=9){
            printf("%s\n",num[i-1]);
        }
        else{
            if(i%2==0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }

    }
    return 0;
}
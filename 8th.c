/*Write a program in C to calculate the sum of digit of a given number*/

#include<stdio.h>
int main(){
    int n;
    
    printf("Enter your number:");
    scanf("%d",&n);
    int real=n;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    printf("%d is the sum of the digit of given number %d",sum,real);
    return 0;
}
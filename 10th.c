/* wAP to print the given pattern 
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4 
4 4 4 4 4 4 4                                   
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    int min =0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(a>n) a=2*n-i;
            int b=j;
            if(b>n) b=2*n-j;
            if(a>b) min=b;
            else min=a;
            int max=n+1-min;
            printf("%d ",max);
        }
        printf("\n");
    }
    return 0;
}
/*There is a series,S, where the next term is the sum of pervious three terms.
 Given the first three terms of the series ,a ,b and c respectively, you have to output the nth term of the series using recursion.
*/
#include<stdio.h>
int finding_nth_number(int n,int a,int b,int c){
    if(n==1) return a;
    else if(n==2) return b;
    else if(n==3) return c;
    return finding_nth_number(n-1,a,b,c)+finding_nth_number(n-2,a,b,c)+finding_nth_number(n-3,a,b,c);
}
int main(){
    int n;
    printf("Enter nth terms:");
    scanf("%d",&n);
    int a=1,b=2,c=3;

    int ans=finding_nth_number(n,a,b,c);
    printf("%d is the %dth number.",ans,n);
    return 0;
}
/* Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. 
Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.
*/

#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
     int sum=*a+*b;
     int diff=abs(*a-*b);
     *a=sum;
     *b=diff;
}

int main() {
    int a, b;
    printf("Enter your numbers:\n");
    scanf("%d %d",&a,&b);
    int *pa = &a, *pb = &b;
    
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
/* wAP to reverse an given array 
array --> 5 4 3 2 1
after reversing --> 1 2 3 4 5
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of element:");
    scanf("%d",&n);
    int *arr=(int*) malloc(n*sizeof(int));
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Array after reversing:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
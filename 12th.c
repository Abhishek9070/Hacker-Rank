/*WAP to print the sum of array in which you have to allocate memory dynamically*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int*) malloc(n*sizeof(int)); //memory allocation for array
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //taking input 
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]; // adding the array
    }
    printf("%d",sum); // Printing the sum
    free(arr);
    return 0;
}
/*You are given n triangkes , speciffically , their sides ai,bi,ci.
Print them in the same style but sorted by their areas from the smallest one to the largest one.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef struct triangle {
    int a;
    int b;
    int c;
}triangle;
double calculating_area(triangle tr){ // calculating_area function for compare
    double p=(tr.a+tr.b+tr.c)/2; // finding area using HERON'S formula
    return sqrt(p*(p-tr.a)*(p-tr.b)*(p-tr.c));
}
int compare(const void *a , const void *b){ // compare function for qsort 
    int area_a=calculating_area(*(const triangle*)a);//using typecasting for assing value to our void value
    int area_b=calculating_area(*(const triangle*)b);
    if(area_a<area_b) return -1;
    if(area_a>area_b) return 1;
    else return 0;
}
void sort_by_area(triangle* tr,int n){ // Catching the value passes from the main function 
    qsort(tr , n , sizeof(triangle) , compare); //using qsort which is a standard library function whch usually  sort array
};
int main(){
    int n;
    printf("Enter number of triangle:"); // taking n input from the user which defines number of triangle 
    scanf("%d",&n);
    
    triangle *tr = malloc(n * sizeof(triangle)); //Making space for the sides of triangle using malloc
    for(int i=0;i<n;i++){
    scanf("%d%d%d",&tr[i].a,&tr[i].b,&tr[i].c); //Taking inpupt of sides of triangles 
    }
    
    sort_by_area(tr,n); // Making function for sorting and calling function named sort_by_area and passing the value tr->ai,bi,ci and n->no of triangle
    printf("Sides after sorting them according to their area:\n");
     for(int i=0;i<n;i++){
        printf("%d %d %d",tr[i].a,tr[i].b,tr[i].c); //printing the sides after sorting 
        printf("\n");//changin line so that our output will look good
    }
    free(tr); //free dynamically allocated memory
    return 0;
}
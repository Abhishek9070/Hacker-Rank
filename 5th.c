/* Calculate the marks of boys or girls in a class where you will give input  number of students marks and gender ,
in which student at index(0,2,4...) will be boys and student at index(1,3,5...) will be girl find the sum of the marks according to gender
*/
#include<stdio.h>
#include<stdlib.h>
int calculating_marks(int* marks,int number_of_student,char gender){
    int sum=0;
    if(gender=='b'){
        for(int i=0;i<number_of_student;i+=2){
            sum+=marks[i];
        }
    }
    else if(gender=='g'){
        for(int i=1;i<number_of_student;i+=2){
            sum+=marks[i];
        }
    }
    return sum;
}
int main(){
    int number_of_student;
    char gender;
    int sum;

    printf("Enter the total number of student in the class:");
    scanf("%d",&number_of_student);

    printf("Enter the marks of students:\n");
    int*marks =(int*) malloc(number_of_student*sizeof(int));
    for(int student=0;student<number_of_student;student++){
        scanf("%d",(marks+student));
    }

    printf("Enter the gender:"); // b -> boy & g -> girl
    scanf(" %c",&gender);
    
     sum=calculating_marks(marks,number_of_student,gender);

    printf("%d is the total sum",sum);

    return 0;
}
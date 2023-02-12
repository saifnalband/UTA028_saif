#include<stdio.h>
int main(){
    struct student{
        /* data */
        char name[50];
        int rollno;
        int marks;
    };
    struct student a1,a2;
    printf("1st student");
    scanf("%s %d %d", &a1.name,&a1.rollno,&a1.marks);
    printf("2nd student");
    scanf("%s %d %d", &a2.name,&a2.rollno, &a2.marks);
    float avg = (a1.marks + a2.marks)/2;
    printf("%f",avg); 
}
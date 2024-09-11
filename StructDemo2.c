#include<stdio.h>
#include<stdlib.h>


struct student{
    int studentId;
    char name[30];
};


int main(){

    struct student s; // 34byte 
    struct student *p; 
    printf("\nEnter id and name");
    scanf("%d%s",&s.studentId,&s.name);
    printf("\nId = %d Name = %s",s.studentId,s.name);


    p = malloc(sizeof(struct student));
    printf("\nEnter id and name");
    scanf("%d%s",&p->studentId,&p->name);
    printf("\nId = %d Name = %s",p->studentId,p->name);
 
    return 0;
}
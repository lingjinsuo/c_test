#include "stdio.h"
#include "stdint.h"
#include "string.h"
#include "common_data.h"

void initStudent(){
    for(int i=0;i<100;i++){
        Student student{};
        student.id = i;
        char c [10]= "zhang";
        student.score = 100 + i;
        strcpy(student.name, c);
        studentArr[i] = student;
    }
}

void printStudent(uint16_t id){
    Student student = studentArr[id];
    printf("student id:%d, name:%s, score:%d \n", student.id, student.name, student.score);
}

int main(){
    initStudent();
    uint16_t stu10 = 10;
    Student & student = studentArr[stu10];
    printStudent(stu10);

    student.score = 99;
    printStudent(stu10);

}
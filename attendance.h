#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20]; //학생이름
    int studentID; //학번
    char department[20]; //소속학부
    int tuesday; //화요일 출석 여부 0: 결석 1: 출석
    int friday; //금요일 출석 여부 0: 결석 1: 출석
    int offline; //금요일 오프라인 창여 여부 불참: 0 참석: 1
    char grade[3]; //성적
} Student;

int createStudent(Student *s); //C
void readStudent(Student *s); //R
void updateStudent(Student *s); //U
int deleteStudent(Student *s); //D
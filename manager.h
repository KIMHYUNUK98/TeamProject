#include "attendance.h"

void listStudent(Student *s, int index);
char selectStudent(Student *s, int index);
int selectStudentID(Student *s, int index);
int selectDataNumber(Student *s, int index);
int selectMenu();
int loadFile(Student *s); //파일 불러오기
void saveData(Student *s, int index); //파일 저장하기
void giveGrade(Student *s);
void searchName(Student *s);
void searchID(Student *s);
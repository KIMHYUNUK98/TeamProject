#include "attendance.h"

void listStudent(Student *s, int index);
char selectStudent(Student *s, int index);
int selectStudentID(Student *s, int index);
int selectDataNumber(Student *s, int index);
int selectMenu();
int loadFile(Student *s); //���� �ҷ�����
void saveData(Student *s, int index); //���� �����ϱ�
void giveGrade(Student *s);
void searchName(Student *s);
void searchID(Student *s);
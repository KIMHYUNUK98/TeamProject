#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20]; //�л��̸�
    int studentID; //�й�
    char department[20]; //�Ҽ��к�
    int tuesday; //ȭ���� �⼮ ���� 0: �Ἦ 1: �⼮
    int friday; //�ݿ��� �⼮ ���� 0: �Ἦ 1: �⼮
    int offline; //�ݿ��� �������� â�� ���� ����: 0 ����: 1
    char grade; //����
} Student;

int createStudent(Student *s); //C
void readStudent(Student *s); //R
void updateStudent(Student *s); //U
int deleteStudent(Student *s); //D
#include "attendance.h"

void listStudent(Student *s, int index) {
	printf("\n�̸�\t�й�\t�Ҽ��к�\tȭ���� �⼮\t�ݿ��� �⼮\t�������� �⼮ ����\n");
    printf("=======================================================\n");
    for(int i = 0; i < index; i++){
        if( s[i].studentID == -1) continue;
		printf("%d\t", i+1);
        readStudent(&s[i]);
    }
    printf("\n");
}

char selectStudent(Student *s, int index) {
	char name[20];
    listStudent(s, index);
    printf("�̸��� (���:0)?");
    scanf("%s", name);
    getchar();
    return *name;
}

int selectStudentID(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("��ȣ�� (���:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectDataNumber(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("��ȣ�� (���:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******�⼮�� ��� ����******\n");
	printf("1. ��ȸ\n");
	printf("2. �߰�\n");
	printf("3. ����\n");
	printf("4. ����\n");
	printf("5. ����\n");
	printf("1. ��ȸ\n");
	printf("1. ��ȸ\n");
	printf("1. ��ȸ\n");
}

int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {

}

void searchName(Student *s) {

}

void searchID(Student *s) {

}


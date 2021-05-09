#include "attendance.h"
#include <string.h>

int createStudent(Student *s) {
	printf("�л��̸���? ");
	scanf("%s", s->name);

	printf("�й���? ");
	scanf("%d", &s->studentID);

	printf("�Ҽ��к�: ");
	scanf("%s", s->department);

	printf("ȭ���� �⼮ ����: ");
	scanf("%d", &s->tuesday);

	printf("�ݿ��� �⼮ ����: ");
	scanf("%d", &s->friday);

	printf("�ݿ��� �������� ���� ����: ");
	scanf("%d", &s->offline);

	strcpy(s->grade, "  ");

	return 1;
}

void readStudent(Student *s) {
        printf("%s\t %d\t %s   %d\t\t%d\t\t%d\t\t%s", s->name, s->studentID, s->department, s->tuesday, s->friday, s->offline, s->grade);
}

void updateStudent(Student *s) {	
	printf("�л��̸���? ");
	scanf("%s", s->name);

	printf("�й���? ");
	scanf("%d", &s->studentID);

	printf("�Ҽ��к�: ");
	scanf("%s", s->department);

	printf("ȭ���� �⼮ ����: ");
	scanf("%d", &s->tuesday);

	printf("�ݿ��� �⼮ ����: ");
	scanf("%d", &s->friday);

	printf("�ݿ��� �������� ���� ����: ");
	scanf("%d", &s->offline);
	
	printf("==> ������Ʈ ����!!!\n");
}

int deleteStudent(Student *s) {
	strcpy(s->name, "NULL");
	s->studentID = -1;
	strcpy(s->department, "NULL");
	s->tuesday = -1;
	s->friday = -1;
	s->offline = -1;
	
	printf("==> ������!!!\n");
	return 1;
}

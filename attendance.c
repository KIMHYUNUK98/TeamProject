#include "attendance.h"

int createStudent(Student *s) {
	printf("학생이름음? ");
	scanf("%s", s->name);

	printf("학번은? ");
	scanf("%d", &s->studentID);

	printf("소속학부: ");
	scanf("%s", s->department);

	printf("화요일 출석 여부: ");
	scanf("%d", &s->tuesday);

	printf("금요일 출석 여부: ");
	scanf("%d", &s->friday);

	printf("금요일 오프라인 참여 여부: ");
	scanf("%d", &s->offline);

	return 1;
}

void readStudent(Student *s) {
	printf("%s\t %d\t %s \t\t%d\t%d\t\t%d", s->name, s->studentID, s->department, s->tuesday, s->friday, s->offline);
}

void updateStudent(Student *s) {	
	printf("학생이름음? ");
	scanf("%s", s->name);

	printf("학번은? ");
	scanf("%d", &s->studentID);

	printf("소속학부: ");
	scanf("%s", s->department);

	printf("화요일 출석 여부: ");
	scanf("%d", &s->tuesday);

	printf("금요일 출석 여부: ");
	scanf("%d", &s->friday);

	printf("금요일 오프라인 참여 여부: ");
	scanf("%d", &s->offline);
	
	printf("==> 업데이트 성공!!!\n");
}


int deleteStudent(Student *s) {
	strcpy(s->name, "NULL");
	s->studentID = -1;
	strcpy(s->department, "NULL");
	s->tuesday = -1;
	s->friday = -1;
	s->offline = -1;
	
	printf("==> 삭제됨!!!\n");
	return 1;
}

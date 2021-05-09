#include "attendance.h"

void listStudent(Student *s, int index) {
	printf("\n\t?���?\t?���?\t\t?��?��?���?   ?��?��?�� 출석  금요?�� 출석  ?��?��?��?�� 출석 ?���?\n");
    printf("===================================================================================\n");
    for(int i = 0; i < index; i++){
        if( s[i].studentID == -1) continue;
		printf("%d\t", i+1);
        readStudent(&s[i]);
        printf("\n");
    }
}

int selectStudent(Student *s, int index) {
	char name[20];
    int i = 0;
    listStudent(s, index);
    printf("�̸���? ");
    scanf("%s", name);
    getchar();
    for(i = 0 ; i < index ; i++) {
        if(strcmp(name,s[i].name) == 0)
            return i;
    }
    return -1;
}

int selectStudentID(Student *s, int index) {
	int no;
    int i = 0;
    listStudent(s, index);
    printf("�й���? ");
    scanf("%d",&no);
    getchar();
    for(i = 0 ; i < index ; i++) {
        if(s[i].studentID == no)
            return i;
    }
    return -1;
}

int selectDataNumber(Student *s, int index) {
	int no;
    listStudent(s, index);
    printf("번호?�� (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******출석�? 명단 �?�?******\n");
	printf("1. 조회\n");
	printf("2. 추�??\n");
	printf("3. ?��?��\n");
	printf("4. ?��?��\n");
	printf("5. ????��\n");
	printf("0. 종료\n");
    printf("=? ?��?��?�� 메뉴?��?: ");
    scanf("%d", &menu);

    return menu;
}


int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {
    printf("?��?��?�� ?��?��?��?��?��: ");
    scanf("%c", &s->grade);
    printf("=>?��?�� ?��?�� ?���?\n");
}

void searchName(Student *s) {

}

void searchID(Student *s) {

}


#include "attendance.h"

void listStudent(Student *s, int index) {
        printf("\n\t이름\t학번\t\t소속학부   화요일 출석  금요일 출석  오프라인 출석 여부  성적\n");
    printf("==============================================================================================\n");
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
    printf("이름은? ");
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
    printf("학번은? ");
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
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******출석부 명단 관리******\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 저장\n");
    printf("6. 성적입력\n");
	printf("0. 종료\n");
    printf("=? 원하는 메뉴는?: ");
    scanf("%d", &menu);

    return menu;
}

int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {
    printf("성적을 입력하세요: ");
    scanf("%s", s->grade);
    printf("=>성적 입력 완료\n");
}

void searchName(Student *s) {

}

void searchID(Student *s) {

}


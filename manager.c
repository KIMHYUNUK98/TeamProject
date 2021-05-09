#include "attendance.h"

void listStudent(Student *s, int index) {
	printf("\n\t?´ë¦?\t?•™ë²?\t\t?†Œ?†?•™ë¶?   ?™”?š”?¼ ì¶œì„  ê¸ˆìš”?¼ ì¶œì„  ?˜¤?”„?¼?¸ ì¶œì„ ?—¬ë¶?\n");
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
    printf("ÀÌ¸§Àº? ");
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
    printf("ÇĞ¹øÀº? ");
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
    printf("ë²ˆí˜¸?Š” (ì·¨ì†Œ:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

int selectMenu() {
	int menu;
	printf("\n******ì¶œì„ë¶? ëª…ë‹¨ ê´?ë¦?******\n");
	printf("1. ì¡°íšŒ\n");
	printf("2. ì¶”ê??\n");
	printf("3. ?ˆ˜? •\n");
	printf("4. ?‚­? œ\n");
	printf("5. ????¥\n");
	printf("0. ì¢…ë£Œ\n");
    printf("=? ?›?•˜?Š” ë©”ë‰´?Š”?: ");
    scanf("%d", &menu);

    return menu;
}


int loadFile(Student *s) {

}

void saveData(Student *s, int index) {

}

void giveGrade(Student *s) {
    printf("?„±? ?„ ?…? ¥?•˜?„¸?š”: ");
    scanf("%c", &s->grade);
    printf("=>?„±?  ?…? ¥ ?™„ë£?\n");
}

void searchName(Student *s) {

}

void searchID(Student *s) {

}


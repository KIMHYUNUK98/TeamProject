#include <stdio.h>
#include <string.h>
#include "manager.h"

int main() {

	Student slist[100];
	int curcount = 0;
	int index = 0;
	int count = 0, menu;

	while(1) {
		menu = selectMenu();
		if(menu == 0) {
			printf("종료됨!!\n");
			break;
		}
		if(menu == 1 || menu == 3 || menu == 4)
			if(count == 0) continue;
		if(menu == 1) {
			if(count > 0) listStudent(slist, index);
		}
		else if(menu == 2) {
			count += createStudent(&slist[index++]);
			printf("==> 추가됨!!!\n");
		}
		else if(menu == 3) {
			int no = selectStudent(slist, index);
			if(no == -1) {
				printf("==> 해당 학생 이름 없음!!\n");
				continue;
			}
			updateStudent(&slist[no]);
		}
		else if(menu == 4) {
			int delok, no;
			printf("어떤 정보를 삭제하시겠습니까?(0: 삭제취소 1:번호 2:이름 3:학번): ");
			scanf("%d", &delok);
			if(delok == 0) {
				printf("취소됨!!!\n");
				continue;
			}
			else if(delok == 1) {
				no = selectDataNumber(slist, index);
				if(no == 0)
					printf("=> 삭제 취소됨!!\n");
				else
					if(deleteStudent(&slist[no-1])) count--;
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(no == -1)
					printf("=> 일치하는 학생 이름이 없음!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
			}
			else {
				no = selectStudentID(slist, index);
				if(no == -1)
					printf("=> 일치하는 학생 학번이 없음!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
			}
		}
	}
	return 0;
}
			
			


#include <stdio.h>
#include <string.h>
#include "attendance.h"

int main() {

	Student slist[100];
	int curcount = 0;
	int count = 0, menu;

	while(1) {
		menu = selectMenu();
		if(menu = 0) {
			printf("종료됨!!\n");
			break;
		}
		if(menu == 1 || menu == 3 || menu == 4)
			if(count == 0) continue;
		if(menu == 1) {
			if(count > 0) listStudent(slist, index);
		}
		else if(menu == 2) {
			count += addScore(&slist[index++]);
			printf("==> 추가됨!!!\n");
		}
		else if(menu == 3) {
			int no = selectStudent(slist, index);
			if(no == 0) {
				printf("취소됨!!!\n");
				continue;
			}
			updateStudent(&slist[no-1]);
		}
		else if(menu == 4) {
			int delok;
			printf("어떤 정보를 입력하시겠습니까?(1:번호 2:이름 3: 학번): ");
			scanf("%d", &delok);
			if(delok == 1) {
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> 삭제됨!!!\n");
			}
			int no = selectStudent(slist, index);
			if(no == 0) {
				printf("취소됨!!!\n");
				continue;
			}
		}
	}
	return 0;
}
			
			


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
<<<<<<< HEAD
			if(no == 0) {
				printf("취소됨!!!\n");
=======
			if(no == -1) {
				printf("==> �ش� �л� �̸� ����!!\n");
>>>>>>> 30ee5d9a3c0ce614f14bc6cbdb4a9ebff7066774
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
<<<<<<< HEAD
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> 삭제됨!!!\n");
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> 삭제됨!!!\n");
			}
			else {
				no = selectStudentID(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> 삭제됨!!!\n");
=======
				if(no == 0)
					printf("=> ���� ��ҵ�!!\n");
				else
					if(deleteStudent(&slist[no-1])) count--;
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(no == -1)
					printf("=> ��ġ�ϴ� �л� �̸��� ����!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
			}
			else {
				no = selectStudentID(slist, index);
				if(no == -1)
					printf("=> ��ġ�ϴ� �л� �й��� ����!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
>>>>>>> 30ee5d9a3c0ce614f14bc6cbdb4a9ebff7066774
			}
		}
	}
	return 0;
}
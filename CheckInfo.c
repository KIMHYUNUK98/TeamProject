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
			printf("�����!!\n");
			break;
		}
		if(menu == 1 || menu == 3 || menu == 4)
			if(count == 0) continue;
		if(menu == 1) {
			if(count > 0) listStudent(slist, index);
		}
		else if(menu == 2) {
			count += createStudent(&slist[index++]);
			printf("==> �߰���!!!\n");
		}
		else if(menu == 3) {
			int no = selectStudent(slist, index);
			if(no == 0) {
				printf("��ҵ�!!!\n");
				continue;
			}
			updateStudent(&slist[no-1]);
		}
		else if(menu == 4) {
			int delok, no;
			printf("� ������ �����Ͻðڽ��ϱ�?(0: ������� 1:��ȣ 2:�̸� 3:�й�): ");
			scanf("%d", &delok);
			if(delok == 0) {
				printf("��ҵ�!!!\n");
				continue;
			}
			else if(delok == 1) {
				no = selectDataNumber(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ������!!!\n");
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ������!!!\n");
			}
			else {
				no = selectStudentID(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ������!!!\n");
			}
		}
	}
	return 0;
}
			
			

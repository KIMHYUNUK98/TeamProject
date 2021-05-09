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
			printf("ì¢…ë£Œë¨!!\n");
			break;
		}
		if(menu == 1 || menu == 3 || menu == 4)
			if(count == 0) continue;
		if(menu == 1) {
			if(count > 0) listStudent(slist, index);
		}
		else if(menu == 2) {
			count += createStudent(&slist[index++]);
			printf("==> ì¶”ê°€ë¨!!!\n");
		}
		else if(menu == 3) {
			int no = selectStudent(slist, index);
<<<<<<< HEAD
			if(no == 0) {
				printf("ì·¨ì†Œë¨!!!\n");
=======
			if(no == -1) {
				printf("==> ÇØ´ç ÇĞ»ı ÀÌ¸§ ¾øÀ½!!\n");
>>>>>>> 30ee5d9a3c0ce614f14bc6cbdb4a9ebff7066774
				continue;
			}
			updateStudent(&slist[no]);
		}
		else if(menu == 4) {
			int delok, no;
			printf("ì–´ë–¤ ì •ë³´ë¥¼ ì‚­ì œí•˜ì‹œê² ìŠµë‹ˆê¹Œ?(0: ì‚­ì œì·¨ì†Œ 1:ë²ˆí˜¸ 2:ì´ë¦„ 3:í•™ë²ˆ): ");
			scanf("%d", &delok);
			if(delok == 0) {
				printf("ì·¨ì†Œë¨!!!\n");
				continue;
			}
			else if(delok == 1) {
				no = selectDataNumber(slist, index);
<<<<<<< HEAD
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ì‚­ì œë¨!!!\n");
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ì‚­ì œë¨!!!\n");
			}
			else {
				no = selectStudentID(slist, index);
				if(deleteStudent(&slist[no-1])) count--;
				printf("==> ì‚­ì œë¨!!!\n");
=======
				if(no == 0)
					printf("=> »èÁ¦ Ãë¼ÒµÊ!!\n");
				else
					if(deleteStudent(&slist[no-1])) count--;
			}
			else if(delok == 2) {
				no = selectStudent(slist, index);
				if(no == -1)
					printf("=> ÀÏÄ¡ÇÏ´Â ÇĞ»ı ÀÌ¸§ÀÌ ¾øÀ½!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
			}
			else {
				no = selectStudentID(slist, index);
				if(no == -1)
					printf("=> ÀÏÄ¡ÇÏ´Â ÇĞ»ı ÇĞ¹øÀÌ ¾øÀ½!!\n");
				else
					if(deleteStudent(&slist[no])) count--;
>>>>>>> 30ee5d9a3c0ce614f14bc6cbdb4a9ebff7066774
			}
		}
	}
	return 0;
}
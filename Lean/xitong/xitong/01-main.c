#include "01.h"                                     //包含头文件
int main(int argc, char* argv[]) {
	char select;                                                  //存放用户选择的菜单项
	init_pcb_table();                                              //初始化进程控制块表
	while (1) {
		printf("|----------MAIN    MENU-------------|\n");                //显示菜单项
		printf("|  1:first come first served       |\n");
		printf("|  2:round robin                |\n");
		printf("|  3:highest priority first          |\n");
		printf("|  4:multi_level feedback queue   |\n");
		printf("|  5:display ready process queue  |\n");
		printf("|  6:display blocked process queue |\n");
		printf("|  7:display running queue        |\n");
		printf("|  a:create a process             |\n");
		printf("|  b:delete a process             |\n");
		printf("|  c:block  a process            |\n");
		printf("|  d:wakeup  a process          |\n");
		printf("|  8:exit                        |\n");
		printf("|-----------------------------------|\n");
		printf("select a function(1~8,a~d):");                           //输出提示信息
		do {
			select = (char)_getch();                                   //接收用户的选项
		} while (!((49 <= select && select <= 56) || (97 <= select && select <= 100)));
		system("cls");                                               //清屏
		switch (select) {                                              //由选项控制程序功能
		case '1':
			FCFS();
			break;
		case '2':
			RR();
			break;
		case '3':
			HPF();
			break;
		case '4':
			MFBQ();
			break;
		case '5':
			printf("              ready  queue\n");
			display_process_queue(pcb_ready);
			break;
		case '6':
			printf("              blocked  queue\n");
			display_process_queue(pcb_blocked);
			break;
		case '7':
			printf("              running  queue\n");
			display_process_queue(pcb_run);
			break;
		case 'a':
			create_process();
			break;
		case 'b':
			break;
		case 'c':
			block_process_by_name();
			break;
		case 'd':
			wakeup_process();
			break;
		case '8':
			return 0;
		}
		printf("\nPress any key to return to main menu.");
		_getch();
		system("cls");
	}
	return 0;
}


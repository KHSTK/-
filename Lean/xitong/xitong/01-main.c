#include "01.h"                                     //����ͷ�ļ�
int main(int argc, char* argv[]) {
	char select;                                                  //����û�ѡ��Ĳ˵���
	init_pcb_table();                                              //��ʼ�����̿��ƿ��
	while (1) {
		printf("|----------MAIN    MENU-------------|\n");                //��ʾ�˵���
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
		printf("select a function(1~8,a~d):");                           //�����ʾ��Ϣ
		do {
			select = (char)_getch();                                   //�����û���ѡ��
		} while (!((49 <= select && select <= 56) || (97 <= select && select <= 100)));
		system("cls");                                               //����
		switch (select) {                                              //��ѡ����Ƴ�����
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


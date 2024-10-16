#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <io.h>
#include <string.h>

#define MAX_PROCESS 10
int process_number = 0;                       //��һ�����õĽ��̱��

typedef struct pcb {
	struct pcb* next;                             //��һ�����̿��ƿ�ָ��
	char process_name[20];                      //������
	int process_number;                          //���̱��
	int process_start_moment;                    //��������ʱ��
	int process_need_time;                       //Ҫ������ʱ��
	int process_time_slice;                       //ʱ��Ƭ
	int process_priority;                          //������
}PCB;                                       //�Զ����������ͣ����̿��ƿ�
PCB pcb_table[MAX_PROCESS];              //���̿��ƿ��

PCB* pcb_run = NULL;                        //�������ж���ͷָ��
PCB* pcb_free = NULL;                       //���̿��ж���ͷָ��
PCB* pcb_ready = NULL;                      //���̾�������ͷָ��
PCB* pcb_ready_rear = NULL;                 //���̾�������βָ��
PCB* pcb_blocked = NULL;                    //��������ͷָ��
PCB* pcb_blocked_rear = NULL;               //��������βָ��

void init_pcb_table();                          //��ʼ�����̿��ƿ��
void print_space(int num);                     //��ʾ���ɸ��ո�
void display_process_queue(PCB* queue);      //��ʾ���̶���
PCB* create_process();          //�������̺���,�ɹ�ʱ�����´������̵�PCB,ʧ��ʱ����NULL��
void block_process_by_name();                //����ָ�����ƵĽ��̡�
void wakeup_process();                       //���ѽ���
void FCFS();                                 //�����ȷ�����̵����㷨
void RR();                                   //ʱ��Ƭ��ת���̵����㷨
void HPF();                                  //���������̵����㷨
void MFBQ();                                //�༶�������н��̵����㷨


#include"01.h"

void init_pcb_table()
{
	int i = 0;
	pcb_free = &pcb_table[0];
	pcb_table[MAX_PROCESS - 1].next = NULL;
	pcb_table[MAX_PROCESS - 1].process_number = 0;
	pcb_table[MAX_PROCESS - 1].process_start_moment = 0;
	pcb_table[MAX_PROCESS - 1].process_need_time = 0;
	pcb_table[MAX_PROCESS - 1].process_time_slice = 0;
	pcb_table[MAX_PROCESS - 1].process_priority = 0;
	strcpy(pcb_table[MAX_PROCESS - 1].process_name, "");
	for (i = 0; i < MAX_PROCESS - 1; i++) {
		pcb_table[i].next = &pcb_table[i + 1];
		pcb_table[i].process_number = 0;
		pcb_table[i].process_start_moment = 0;
		pcb_table[i].process_need_time = 0;
		pcb_table[i].process_time_slice = 0;
		pcb_table[i].process_priority = 0;
		strcpy(pcb_table[i].process_name, "");
	}
}

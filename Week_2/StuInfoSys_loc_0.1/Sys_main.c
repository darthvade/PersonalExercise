#include "Sys_head_back.h"

int main() {
	LinkInfo Lmain;
	init_info_main_list(&Lmain);	
	read_all_info_from_file("Sys_Database.db", Lmain);
	write_all_info_into_file("output.data", Lmain);
	//debug(Lmain);
	return 0;
}

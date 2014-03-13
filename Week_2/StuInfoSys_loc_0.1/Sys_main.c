#include "Sys_head_back.h"

int main() {
	LinkInfo Lmain; //信息总表
	init_info_main_list(&Lmain); //初始化信息总表
	read_all_info_from_file("Sys_Database.db", Lmain); //从文件读数据

/*测试---------------------------------------------------------------------*/

	StuInfo	st;

	st.s_id = 1111;
	strcpy(st.s_name, "Nora");
	st.s_age = 23;
	st.s_grade = 5;
	st.s_class = 3;
	strcpy(st.s_major, "Opto-e");

	strcpy(st.s_score.c_name[0], "math");
	st.s_score.c_score[0] = 97;

	strcpy(st.s_score.c_name[1], "science");
	st.s_score.c_score[1] = 87;

	strcpy(st.s_score.c_name[2], "history");
	st.s_score.c_score[2] = 67;

	strcpy(st.s_score.c_name[3], "writing");
	st.s_score.c_score[3] = 87;

	update_info_in_list(Lmain, 1005, &st);

	//delete_info_from_list(Lmain, 1129);

	//insert_new_info_into_list(Lmain, &st); //插入新学生信息

	//delete_info_from_list(Lmain, 1024);

/*测试---------------------------------------------------------------------*/


	write_all_info_into_file("Sys_Database.db", Lmain); // 向文件写入数据
	//debug(Lmain);
	return 0;
}

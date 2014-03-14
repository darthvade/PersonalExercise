#ifndef _SYS_HEAD_ACCOUNT_H_
#define _SYS_HEAD_ACCOUNT_H_

/*-----------------------------------------------------------------------------------*/
/*测试用*/

/*-----------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*-----------------------------------------------------------------------------------*/

#define LEN_USER_NAME 32 /*用户ID_字符串_最大长度*/
#define LEN_USER_PASSWORD 32 /*用户密码_字符串_最大长度*/

/*-----------------------------------------------------------------------------------*/

struct User_account {
	char u_name[LEN_USER_NAME];
	int permission;
	char u_password[LEN_USER_PASSWORD];
	User_account *next;
}; /*账户信息*/

typedef struct User_account AccountNode;
typedef struct USer_account * LinkAccount;

/*-----------------------------------------------------------------------------------*/

void init_account_list(LinkAccount *L); /*初始化账户信息表*/

void read_account_from_file(char *filename, LinkAccount Laccount); /*读出文件中所有账户信息*/

void write_account_into_file(char *filename, LinkAccount Laccount); /*写入所有账户信息到文件*/

void insert_new_account(LinkAccount Laccount, AccountNode *insert_account); /*增加新账户*/

void delete_account(LinkAccount Laccount, char *user_name); /*删除账户*/

void update_account(LinkAccount Laccount, AccountNode *update_account); /*更新账户信息*/

void search_account(LinkAccount Laccount, char *user_name, AccountNode *search_account); /*查找用户信息*/

/*-----------------------------------------------------------------------------------*/


#endif









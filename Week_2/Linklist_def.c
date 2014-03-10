#include "Linklist.h"

void init_list(Linklist *L) {
	(*L) = (LinkNode *)malloc(sizeof(LinkNode));
	(*L)->data = 0;
	(*L)->next = NULL;
}//����ͷ���

void create_list_head(Linklist L, int *input, int len) {
	LinkNode *insert;
	int i;
	for(i = 0; i < len; i++) {
		insert = (LinkNode *)malloc(sizeof(LinkNode));
		insert->data = input[i];
		insert->next = L->next;
		L->next = insert;
	}
}//��������ͷ�巨��

void debug(Linklist L) {
	int i = 0;
	LinkNode *p;
	if(L == NULL) {
		printf("This list is not existed!\n");
	}
	p = L->next;
	if(L->next == NULL) {
		printf("No element in this list!\n");
	}
	while(p) {
		printf("No.%d --> %d\n", i, p->data);
		p = p->next;
		i++;
	}
	putchar('\n');
}//��ӡ�������Ԫ��

void create_list_tail(Linklist L, int *input, int len) {
	LinkNode* p = L;
	LinkNode* insert;
	int i;
	for(i = 0; i < len; i++) {
		insert = (LinkNode* )malloc(sizeof(LinkNode));
		insert->data = input[i];
		insert->next = NULL;
		p->next = insert;
		p = insert;
	}
}//��������β�巨��@

void insert_element(Linklist L, int pos, int insert) {
	LinkNode *cur = L;
	LinkNode *pre = L;
	LinkNode *temp;
	while(cur->next && pos >= 0) {
		pre = cur;
		cur = cur->next;
		pos--;
	}
	if(cur->next) {
		temp = (LinkNode *)malloc(sizeof(LinkNode));
		temp->data = insert;
		temp->next = cur;
		pre->next = temp;
	} else {
		temp = (LinkNode *)malloc(sizeof(LinkNode));
		temp->data = insert;
		temp->next = NULL;
		cur->next = temp;
	}
}//��posλ�ò���insert @

void delete_element(Linklist L, int pos) {
	LinkNode *cur = L;
	LinkNode *pre = L;
	while(cur->next && pos >= 0) {
		pre = cur;
		cur = cur->next;
		pos--;
	}
	if(cur->next) {
		pre->next = cur->next;
		free(cur);
	}
}//ɾ��posλ�õ�Ԫ��@

int get_length(Linklist L) {
	int i = 0;
	LinkNode *p = L;
	while(p->next) {
		i++;
		p = p->next;
	}
	return i;
}//ȡ������@

int is_empty(Linklist L) {
	return L->next == NULL ? 1 : 0;
}//�ж������Ƿ�Ϊ��@

void get_value(Linklist L, int pos, int *get) {
	LinkNode *cur = L;
	while(cur->next && pos >= 0) {
		cur = cur->next;
		pos--;
	}
	*get = cur->data;
}//ȡ��posλ�õ�Ԫ�ش���get

void set_value(Linklist L, int pos, int set) {
	LinkNode *cur = L;
	while(cur->next && pos >= 0) {
		cur = cur->next;
		pos--;
	}
	cur->data = set;
}//��posλ�õ�Ԫ�ظ�ֵΪset@

void clear(Linklist L) {
	LinkNode *cur = L->next;
	while(L->next) {
		L->next = cur->next;
		free(cur);
		cur = L->next;
	}
}//����������ݽڵ�@

void destory(Linklist *L) {
	if((*L)->next != NULL) {
		clear(*L);
	}
	free(*L);
}//������������

void reverse(Linklist L) {
	LinkNode *head;
	LinkNode *tail;
	LinkNode *temp;
	if(L->next == NULL) {
		return;
	}
	head = L->next;
	tail = L->next;
	while(tail->next) {
		tail = tail->next;
	}
	while(tail!=head) {
		temp = head;
		L->next = head->next;
		head = head->next;
		temp->next = tail->next;
		tail->next = temp;
	}
}//��������@
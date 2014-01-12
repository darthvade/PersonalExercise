/**
*线性表的链式存储//没搞定，有段错误，待解决...|-（
*/

#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;
//存储结构定义
typedef struct LNode {
	Elemtype data;
	struct LNode *next;
} LNode, *LinkList;


int InitList_head(LinkList l);//初始化链表（头插法）

int InitList_rear(LinkList l);//初始化链表（尾插法）

LNode* GetElem(LinkList l, int i);//按序号查找结点

LNode* LocateElem(LinkList l, Elemtype e);//按值查找结点

int InsertNode(LinkList l, int i, Elemtype e);//在指定位置插入结点

int DeleteNode(LinkList l, int i);//删除指定位置结点

void Traversal(LinkList l);

int main() {
	LinkList ls;
	InitList_head(ls);
	Traversal(ls);
	return 0;
}


int InitList_head(LinkList l){
	LNode *s;
	int x;
	l = (LinkList)malloc(sizeof(LNode));
	l->next = NULL;
	scanf("%d", &x);
	while(x != 9999) {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = x;
		s->next = l->next;
		l->next = s;
		scanf("%d", &x);
	}
	return 1;
}//初始化链表（头插法）

int InitList_rear(LinkList l){
	LNode *s, *r;
	int x;
	l = (LinkList)malloc(sizeof(LNode));
	r = l;
	l->next = NULL;
	scanf("%d", &x);
	while(x != 9999) {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = x;
		s->next = NULL;
		r->next = s;
		r = s;
	}
	return 1;
}//初始化链表（尾插法）

LNode* GetElem(LinkList l, int i){
	LNode *s = l;
	while(i >= 0){
		s = s->next;
		i--;
	}
	return s;
}//按序号查找结点

LNode* LocateElem(LinkList l, Elemtype e){
	LNode *s = l;
	while(s->next != NULL){
		if(s->data == e){
			return s;
		}else{
			s = s->next;
		}
	}
}//按值查找结点

int InsertNode(LinkList l, int i, Elemtype e){
	LNode *s = l, *insert;
	s = GetElem(s, i - 1);
	insert = (LNode *)malloc(sizeof(LNode));
	insert->data = e;
	insert->next = s;
	s->next = insert;
	return 1;
}//在指定位置插入结点

int DeleteNode(LinkList l, int i){
	LNode *s = l, *delete;
	s = GetElem(s, i - 1);
	delete = s->next;
	s = delete->next;
	free(delete);
	return 1;
}//删除指定位置结点

void Traversal(LinkList l){
	LNode *s = l;
	int i = 0;
	while(s) {
		printf("%d-->%d", i, s->data);
		i++;
		s = s->next;
	}
	printf("\n");
}




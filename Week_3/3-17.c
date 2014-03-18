/*
 *	二叉树的数组实现，
 *	递归形式的前、中、后序遍历
 *
 * */

#include<stdio.h>

void rLR(const int *input, int pos, int n);//前序遍历
void LrR(const int *input, int pos, int n);//中序遍历
void LRr(const int *input, int pos, int n);//后序遍历、深度优先搜索
void BFS(const int *input, int n);//广度优先搜索、层序遍历

/*循环队列*/
#define MAX_LEN 20
typedef struct Queue {
	int data[MAX_LEN];
	int front;
	int rear;
} Queue;

void init_queue(Queue *input); //初始化队列

int is_empty(Queue *input); //队列判空

int enqueue(Queue *input, int n); //入队

int dequeue(Queue *input, int *n); //出队

int main() {


	int input[] = {7, 5, 4, 6, 3, 2, 0, 1, 0, 0, 0, 8};
	rLR(input, 0, sizeof(input) / sizeof(int));
	putchar('\n');
	LrR(input, 0, sizeof(input) / sizeof(int));
	putchar('\n');
	LRr(input, 0, sizeof(input) / sizeof(int));
	putchar('\n');


	/*
	int output;
	Queue q;
	init_queue(&q);
	enqueue(&q, 9);
	enqueue(&q, 8);
	enqueue(&q, 7);
	enqueue(&q, 6);
	enqueue(&q, 5);
	dequeue(&q, &output);
	dequeue(&q, &output);
	dequeue(&q, &output);

	while(!is_empty(&q)) {
		dequeue(&q, &output);
		printf("%d ", output);
	}
	putchar('\n');
	*/

	return 0;
}

void rLR(const int *input, int pos, int n) {
	if(pos < n) {
		if(input[pos] != 0) {
			printf("%d ", input[pos]);
		}
		rLR(input, pos * 2 + 1, n);
		rLR(input, pos * 2 + 2, n);
	} else {
		return;
	}
}

void LrR(const int *input, int pos, int n) {
	if(pos < n) {
		LrR(input, pos * 2 + 1, n);
		if(input[pos]) {
			printf("%d ", input[pos]);
		}
		LrR(input, pos * 2 + 2, n);
	} else {
		return;
	}
}

void LRr(const int *input, int pos, int n) {
	if(pos < n) {
		LRr(input, pos * 2 + 1, n);
		LRr(input, pos * 2 + 2, n);
		if(input[pos]) {
			printf("%d ", input[pos]);
		}
	} else {
		return;
	}
}

void init_queue(Queue *input) {
	input->front = 0;
	input->rear = 0;
}  //初始化队列

int is_empty(Queue *input) { 
	if(input->front == input->rear) {
		return 1;
	} else {
		return 0;
	}
} //队列判空

int enqueue(Queue *input, int n) {
	if((input->rear + 1) % MAX_LEN == input->front) {
		return 0;
	} else {
		input->data[input->rear] = n;
		input->rear = (input->rear + 1) % MAX_LEN; 
		return 1;
	}
}  //入队

int dequeue(Queue *input, int *n) {
	if(input->rear == input->front) {
		return 0;
	} else {
		*n = input->data[input->front];
		input->front = (input->front + 1) % MAX_LEN;
		return 1;
	}
} //出队

void BFS(const int *input, int n) {

} //广度优先搜索、层序遍历



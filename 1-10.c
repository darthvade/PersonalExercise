/**
*直接插入排序/折半插入排序/希尔排序/快速排序（非递归）
*/
#include<stdio.h>
//直接插入排序
void straight_insert_Sort(int a[], const int start, const int end);
//折半插入排序
void binary_insert_Sort(int a[], const int start, const int end);
//希尔排序
void shell_Sort(int a[], const int start, const int end);
//快速排序（非递归）
void quick_Sort(int a[], const int start, const int end);

void display(int a[], int n);

int main(){
	int a[11] = {0, 9, 8, 6, 4, 1, 10, 19, 16, 5, 7};
	display(a, 11);
	shell_Sort(a, 1, 10);
	display(a, 11);
return 0;
}

void straight_insert_Sort(int a[], const int start, const int end){
	int i, j;
	for(i = start + 1; i <= end; i++){
		a[0] = a[i];
		for(j = i - 1; j >= start && a[j] > a[0]; j--){
				a[j + 1] = a[j];
		}
		a[j + 1] = a[0];
	}
}

void binary_insert_Sort(int a[], const int start, const int end){
	int i, j, mid, m, n;
	for(i = start + 1; i <= end; i++){
		a[0] = a[i];
		m = start; n = i;
		while(m <= n){
			mid = (m + n) / 2;
			if(a[mid] > a[0]){
				n = mid - 1;
			}
			else{
				m = mid + 1;
			}
		}
		for(j = i; j > m; j--){
			a[j] = a[j - 1];
		}
		a[j] = a[0];
	}
}
//有BUG！！！！！
void shell_Sort(int a[], const int start, const int end){
	int step, i, j;
	for(step = (end - start) / 2; step >= 1; step = step / 2){
		for(i = start + 1 + step; i <= end; i++){
			a[0] = a[i];
			for(j = i - 1 - step; j >= start && a[j] > a[0]; j = j - step){
				a[j + 1 + step] = a[j];
			}
			a[j + step + 1] = a[0];
		}
	}	
}

void quick_Sort(int a[], const int start, const int end){

}

void display(int a[],int n){
	int i = 0;
	while(i < n) {
		printf("%d --> %d \n", i, a[i]), i++;
	}
}

#ifndef _SORT_H_
#define _SORT_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

void Bubble_sort(int *a, const int start, const int end);

void Sample_selection_sort(int *a, const int start, const int end);

void Straight_insertion_sort(int *a, const int start, const int end);

void Shell_sort(int *a, const int start, const int end);

void shell_insert(int *a, const int start, const int end, const int gap);

void swap(int *a, int *b);

void printInput(const int *a, int n);

#endif

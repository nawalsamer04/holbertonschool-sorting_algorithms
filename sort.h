#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
	* struct listint_s - Doubly linked list node
	* @n: integer stored in the node
	* @prev: points to the previous element of the list
	* @next: points to the next element of the list
	*/
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif

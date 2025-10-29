C - Sorting Algorithms & Big O
Team

Sondos Saleh Alrubaish
Nawal Samer Alharbi

About the Project

This project is part of the Holberton School curriculum and focuses on implementing and understanding different sorting algorithms in C, while analyzing their performance using Big O notation.

We implemented four classic algorithms: Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort, and printed the array or list after every swap, as required.

Repository Structure
holbertonschool-sorting_algorithms/
├── 0-bubble_sort.c
├── 0-O
├── 1-insertion_sort_list.c
├── 1-O
├── 2-selection_sort.c
├── 2-O
├── 3-quick_sort.c
├── 3-O
├── print_array.c
├── print_list.c
├── sort.h
└── README.md

Compilation

All code was compiled and tested on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c print_array.c print_list.c -o output


All files follow the Betty style, contain no global variables, and each file has no more than five functions.

Data Structures
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

Implemented Functions
File	Function	Description
0-bubble_sort.c	void bubble_sort(int *array, size_t size);	Sorts an array using the Bubble Sort algorithm and prints the array after each swap.
1-insertion_sort_list.c	void insertion_sort_list(listint_t **list);	Sorts a doubly linked list using the Insertion Sort algorithm and prints the list after each swap.
2-selection_sort.c	void selection_sort(int *array, size_t size);	Sorts an array using the Selection Sort algorithm and prints the array after each swap.
3-quick_sort.c	void quick_sort(int *array, size_t size);	Sorts an array using the Quick Sort algorithm with the Lomuto partition scheme (pivot = last element) and prints the array after each swap.
Big O Notation
Algorithm	Best Case	Average Case	Worst Case
Bubble Sort	O(n)	O(n²)	O(n²)
Insertion Sort	O(n)	O(n²)	O(n²)
Selection Sort	O(n²)	O(n²)	O(n²)
Quick Sort (Lomuto)	O(nlogn)	O(nlogn)	O(n²)

Each corresponding *-O file (0-O, 1-O, 2-O, 3-O) includes three lines: best, average, and worst cases — in that order.

Notes

The array or list is printed after every swap, as specified in the project instructions.

No standard library functions like printf or puts were used inside the sorting functions themselves.

Only the provided helper files (print_array.c and print_list.c) were used for output during testing.

How to Run Locally

Example commands for testing each algorithm:

Bubble Sort
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble

Insertion Sort (Doubly Linked List)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion

Selection Sort
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
./select

Quick Sort
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
./quick

What We Learned

This project helped us clearly understand how sorting algorithms differ in complexity, performance, and implementation logic.

Working on Quick Sort versus Bubble Sort highlighted how different algorithms can produce the same result with vastly different levels of efficiency.

It was also a great hands-on way to apply Big O notation practically instead of just theoretically.

Authors

👩‍�dos Saleh Alrubaish
👩‍💻 Nawal Samer Alharbi

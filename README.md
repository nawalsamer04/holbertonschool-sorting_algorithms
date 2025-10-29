C - Sorting Algorithms & Big O
=================================

Team:
------
Sondos Saleh Alrubaish  
Nawal Samer Alharbi

---------------------------------
About the Project
---------------------------------
This project is part of the Holberton School curriculum.  
It focuses on understanding and implementing different sorting algorithms in C, 
and analyzing their performance using Big O notation.

We implemented four classic sorting algorithms:
- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort

Each algorithm prints the array or list after every swap, as required.

---------------------------------
Compilation
---------------------------------
All code was compiled and tested on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c print_array.c print_list.c -o output

All files follow the Betty style, contain no global variables, and each file has no more than five functions.

---------------------------------
Data Structure
---------------------------------
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

---------------------------------
Implemented Functions
---------------------------------
0-bubble_sort.c:
    void bubble_sort(int *array, size_t size);
    - Sorts an array using Bubble Sort and prints the array after each swap.

1-insertion_sort_list.c:
    void insertion_sort_list(listint_t **list);
    - Sorts a doubly linked list using Insertion Sort and prints the list after each swap.

2-selection_sort.c:
    void selection_sort(int *array, size_t size);
    - Sorts an array using Selection Sort and prints the array after each swap.

3-quick_sort.c:
    void quick_sort(int *array, size_t size);
    - Sorts an array using Quick Sort with the Lomuto partition scheme (pivot = last element)
      and prints the array after each swap.

---------------------------------
Big O Notation
---------------------------------
Bubble Sort:
    Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

Insertion Sort:
    Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

Selection Sort:
    Best Case: O(n^2)
    Average Case: O(n^2)
    Worst Case: O(n^2)

Quick Sort (Lomuto):
    Best Case: O(nlogn)
    Average Case: O(nlogn)
    Worst Case: O(n^2)

Each corresponding file (0-O, 1-O, 2-O, 3-O) includes three lines:
best case, average case, and worst case.

---------------------------------
Notes
---------------------------------
- The array or list is printed after every swap, as required.
- No standard library functions like printf or puts were used inside the algorithms.
- Only print_array.c and print_list.c were used for output during testing.
- The code stops early for small lists or arrays (size < 2).

---------------------------------
How to Run
---------------------------------
Example for Bubble Sort:
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
    ./bubble

Example for Insertion Sort:
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
    ./insertion

Example for Selection Sort:
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
    ./select

Example for Quick Sort:
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
    ./quick

---------------------------------
Learning Outcome
---------------------------------
This project helped us understand how different sorting algorithms behave in practice,
and how complexity affects performance on larger datasets.

It was a great exercise to compare algorithms like Quick Sort and Bubble Sort,
and see how efficiency differs even when the goal (a sorted list) is the same.

---------------------------------
Authors
---------------------------------
Sondos Saleh Alrubaish  
Nawal Samer Alharbi


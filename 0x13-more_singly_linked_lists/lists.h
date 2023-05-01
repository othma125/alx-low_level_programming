#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#include <stddef.h>
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
int sum_listint(listint_t *);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);
int delete_nodeint_at_index(listint_t **, unsigned int);
listint_t *reverse_listint(listint_t **);
listint_t *find_listint_loop(listint_t *);
size_t free_listint_safe(listint_t **);
size_t print_listint_safe(const listint_t *);
size_t free_listint_safe(listint_t **);
/**
 * memory blocks structure - it counts how many blocks
 * are allocated after a pointer.
 * @ptr: pointer
 * @count: blocks count, the size of every block
 * equalse to sizeof(listint_t))
 * Return: list size
 */
typedef struct
{
	const listint_t *ptr;
	int index;
} memory_block;
#endif

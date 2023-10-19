#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;

void new_pint(stack_t **stack, unsigned int line_num);
void new_free_stack(stack_t *head);
int new_pushint(char *list, int ln);
int new_strcmp(char *opcode, char *list);
void new_add(stack_t **stack, unsigned int line_num);
void new_swap(stack_t **stack, unsigned int line_num);
void new_pop(stack_t **stack, unsigned int line_num);
void new_push(stack_t **stack, unsigned int line_number, int n);
void new_pall(stack_t **stack, unsigned int line_num);
void new_execute(char *string[], stack_t *stack);
int new_nlfind(char *list);
void new_free_list(char *a[]);
int new_combfind(char *list, int ln);

#endif
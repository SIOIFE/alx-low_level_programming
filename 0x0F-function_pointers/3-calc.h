#ifndef CALC_H
#define CALC_H
/**
 * struct op - A structure op.
 * @op: The operator
 * @f: The associated functions.
 *
 * Return: 0
 */
typedef struct op
{
	char *op;
	int (*f)(int k, int b);
} op_t;
int op_add(int k, int b);
int op_sub(int k, int b);
int op_mul(int k, int b);
int op_div(int k, int b);
int op_mod(int k, int b);
int (*get_op_func(char *s))(int, int);
#endif

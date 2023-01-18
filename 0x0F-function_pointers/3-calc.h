#ifndef _HEADER_
#define _HEADER_
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int num1, int num2);
} op_t;

typedef struct op
{
	char *op;
	int (*f)(int num1, int num2);
} pt_t;

int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);
int (*get_op_func(char *s))(int, int);
#endif

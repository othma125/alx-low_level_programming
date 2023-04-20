#ifndef VAR_FUNC_H
#define VAR_FUNC_H

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
#include <stdarg.h>
typedef struct {
	char *type;
	void (*print)(va_list arg);
} printer;
#endif

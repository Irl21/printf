#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

#define BUFF_SIZE 1024
/**
 * struct type_specifier - contains a type represented as char
 * @f: print_fucntion for specific type
 * @t: character representing type
 */

typedef struct type_specifier
{
	char t;
	char *(*f)(va_list args, char *mods);
} spec_t;

/**
 * struct flag_specifier - contains a flag and it's valid specifiers and func
 * @flag: flag represented as character
 * @specs: char pointer to array of valid specifiers for flag
 * @f: get_flag function that returns a char pointer and modifies a char *
 */

typedef struct flag_specifier
{
	char flag;
	char *specs;
	char *(*f)(char *);
} flag_t;
/**
 * struct print_helper_s - contains values needed in print helper
 * @format: pointer to format string
 * @f_i: pointer to index of format string
 * @buff: pointer to buffer
 * @c: pointer to character string, used by copy buffer
 * @buff_i: pointer to index of buffer
 * @busy: pointer to printf isbusy
 * @beg_i: pointer to beginning index (where % was found)
 * @buff_len: Counter for the total amount of characters so far.
 * @flags: pointer to int array pertaining to flag's being used
 * @mods: pointer to char array pertaining to modifiers being used (l and h)
 * @width: width pulled from format string
 * @precision: precision pulled from format string
 * @dot: boolean value 0 or 1 representing precision dot found or not
 * @spec_c: Counter for number of non flag characters encountered during busy
 */

typedef struct print_helper_s
{
	/* string  values */
	const char *format;
	char *buff;
	char *c;

	/* boolean values */

	char dot;
	char busy;
	/* integer values */
	unsigned int f_i;
	unsigned int buff_i;
	unsigned int beg_i;
	unsigned int buff_len;

	int width;
	int precision;
	int spec_c;

	/* flags & mods are pointers to arrays of booleans */

	int *flags;
	char *mods;

} printh_t;

int _printf(const char *format, ...);
#endif
